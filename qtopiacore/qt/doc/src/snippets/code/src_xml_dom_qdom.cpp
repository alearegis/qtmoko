//! [0]
QDomDocument doc;
QDomImplementation impl;

// This will create the element, but the resulting XML document will
// be invalid, because '~' is not a valid character in a tag name.
impl.setInvalidDataPolicy(QDomImplementation::AcceptInvalidData);
QDomElement elt1 = doc.createElement("foo~bar");

// This will create an element with the tag name "foobar".
impl.setInvalidDataPolicy(QDomImplementation::DropInvalidData);
QDomElement elt2 = doc.createElement("foo~bar");

// This will create a null element.
impl.setInvalidDataPolicy(QDomImplementation::ReturnNullNode);
QDomElement elt3 = doc.createElement("foo~bar");
//! [0]


//! [1]
QDomDocument d;
d.setContent(someXML);
QDomNode n = d.firstChild();
while (!n.isNull()) {
    if (n.isElement()) {
        QDomElement e = n.toElement();
        cout << "Element name: " << e.tagName() << endl;
        break;
    }
    n = n.nextSibling();
}
//! [1]


//! [2]
QDomDocument document;
QDomElement element1 = document.documentElement();
QDomElement element2 = element1;
//! [2]


//! [3]
QDomElement element3 = document.createElement("MyElement");
QDomElement element4 = document.createElement("MyElement");
//! [3]


//! [4]
<body>
<h1>Heading</h1>
<p>Hello <b>you</b></p>
</body>
//! [4]


//! [5]
<h1>Heading</h1>
<p>The text...</p>
<h2>Next heading</h2>
//! [5]


//! [6]
<h1>Heading</h1>
<p>The text...</p>
<h2>Next heading</h2>
//! [6]


//! [7]
<link href="http://qtsoftware.com" color="red" />
//! [7]


//! [8]
QDomElement e = //...
//...
QDomAttr a = e.attributeNode("href");
cout << a.value() << endl;                // prints "http://qtsoftware.com"
a.setValue("http://doc.trolltech.com"); // change the node's attribute
QDomAttr a2 = e.attributeNode("href");
cout << a2.value() << endl;               // prints "http://doc.trolltech.com"
//! [8]


//! [9]
QDomElement e = //...
//...
QString s = e.text()
//! [9]


//! [10]
QString text;
QDomElement element = doc.documentElement();
for(QDomNode n = element.firstChild(); !n.isNull(); n = n.nextSibling())
{
    QDomText t = n.toText();
    if (!t.isNull())
        text += t.data();
}
//! [10]


//! [11]
QDomDocument doc = // ...
QDomElement root = doc.firstChildElement("database");
QDomElement elt = root.firstChildElement("entry");
for (; !elt.isNull(); elt = elt.nextSiblingElement("entry")) {
    // ...
}
//! [11]


//! [12]
<img src="myimg.png">
//! [12]


//! [13]
<h1>Hello <b>Qt</b> <![CDATA[<xml is cool>]]></h1>
//! [13]


//! [14]
Hello Qt <xml is cool>
//! [14]


//! [15]
<!-- this is a comment -->
//! [15]


//! [16]
QDomDocument doc("mydocument");
QFile file("mydocument.xml");
if (!file.open(QIODevice::ReadOnly))
    return;
if (!doc.setContent(&file)) {
    file.close();
    return;
}
file.close();

// print out the element names of all elements that are direct children
// of the outermost element.
QDomElement docElem = doc.documentElement();

QDomNode n = docElem.firstChild();
while(!n.isNull()) {
    QDomElement e = n.toElement(); // try to convert the node to an element.
    if(!e.isNull()) {
        cout << qPrintable(e.tagName()) << endl; // the node really is an element.
    }
    n = n.nextSibling();
}

// Here we append a new element to the end of the document
QDomElement elem = doc.createElement("img");
elem.setAttribute("src", "myimage.png");
docElem.appendChild(elem);
//! [16]


//! [17]
QDomDocument doc("MyML");
QDomElement root = doc.createElement("MyML");
doc.appendChild(root);

QDomElement tag = doc.createElement("Greeting");
root.appendChild(tag);

QDomText t = doc.createTextNode("Hello World");
tag.appendChild(t);

QString xml = doc.toString();
//! [17]