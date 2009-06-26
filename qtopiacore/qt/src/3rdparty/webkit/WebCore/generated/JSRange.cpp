/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSRange.h"

#include <wtf/GetPtr.h>

#include "DocumentFragment.h"
#include "JSDocumentFragment.h"
#include "JSNode.h"
#include "JSRange.h"
#include "KURL.h"
#include "Node.h"
#include "Range.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSRange)

/* Hash table */

static const HashTableValue JSRangeTableValues[8] =
{
    { "startContainer", DontDelete|ReadOnly, (intptr_t)jsRangeStartContainer, (intptr_t)0 },
    { "startOffset", DontDelete|ReadOnly, (intptr_t)jsRangeStartOffset, (intptr_t)0 },
    { "endContainer", DontDelete|ReadOnly, (intptr_t)jsRangeEndContainer, (intptr_t)0 },
    { "endOffset", DontDelete|ReadOnly, (intptr_t)jsRangeEndOffset, (intptr_t)0 },
    { "collapsed", DontDelete|ReadOnly, (intptr_t)jsRangeCollapsed, (intptr_t)0 },
    { "commonAncestorContainer", DontDelete|ReadOnly, (intptr_t)jsRangeCommonAncestorContainer, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsRangeConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSRangeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSRangeTableValues, 0 };
#else
    { 18, 15, JSRangeTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSRangeConstructorTableValues[9] =
{
    { "START_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_START, (intptr_t)0 },
    { "START_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_END, (intptr_t)0 },
    { "END_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_END, (intptr_t)0 },
    { "END_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_START, (intptr_t)0 },
    { "NODE_BEFORE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE, (intptr_t)0 },
    { "NODE_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_AFTER, (intptr_t)0 },
    { "NODE_BEFORE_AND_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE_AND_AFTER, (intptr_t)0 },
    { "NODE_INSIDE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_INSIDE, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSRangeConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSRangeConstructorTableValues, 0 };
#else
    { 18, 15, JSRangeConstructorTableValues, 0 };
#endif

class JSRangeConstructor : public DOMObject {
public:
    JSRangeConstructor(ExecState* exec)
        : DOMObject(JSRangeConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSRangePrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSRangeConstructor::s_info = { "RangeConstructor", 0, &JSRangeConstructorTable, 0 };

bool JSRangeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeConstructor, DOMObject>(exec, &JSRangeConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSRangePrototypeTableValues[32] =
{
    { "START_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_START, (intptr_t)0 },
    { "START_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_END, (intptr_t)0 },
    { "END_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_END, (intptr_t)0 },
    { "END_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_START, (intptr_t)0 },
    { "NODE_BEFORE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE, (intptr_t)0 },
    { "NODE_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_AFTER, (intptr_t)0 },
    { "NODE_BEFORE_AND_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE_AND_AFTER, (intptr_t)0 },
    { "NODE_INSIDE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_INSIDE, (intptr_t)0 },
    { "setStart", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStart, (intptr_t)2 },
    { "setEnd", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEnd, (intptr_t)2 },
    { "setStartBefore", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStartBefore, (intptr_t)1 },
    { "setStartAfter", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStartAfter, (intptr_t)1 },
    { "setEndBefore", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEndBefore, (intptr_t)1 },
    { "setEndAfter", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEndAfter, (intptr_t)1 },
    { "collapse", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCollapse, (intptr_t)1 },
    { "selectNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSelectNode, (intptr_t)1 },
    { "selectNodeContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSelectNodeContents, (intptr_t)1 },
    { "compareBoundaryPoints", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCompareBoundaryPoints, (intptr_t)2 },
    { "deleteContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionDeleteContents, (intptr_t)0 },
    { "extractContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionExtractContents, (intptr_t)0 },
    { "cloneContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCloneContents, (intptr_t)0 },
    { "insertNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionInsertNode, (intptr_t)1 },
    { "surroundContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSurroundContents, (intptr_t)1 },
    { "cloneRange", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCloneRange, (intptr_t)0 },
    { "toString", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionToString, (intptr_t)0 },
    { "detach", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionDetach, (intptr_t)0 },
    { "createContextualFragment", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCreateContextualFragment, (intptr_t)1 },
    { "intersectsNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionIntersectsNode, (intptr_t)1 },
    { "compareNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCompareNode, (intptr_t)1 },
    { "comparePoint", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionComparePoint, (intptr_t)2 },
    { "isPointInRange", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionIsPointInRange, (intptr_t)2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSRangePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSRangePrototypeTableValues, 0 };
#else
    { 71, 63, JSRangePrototypeTableValues, 0 };
#endif

const ClassInfo JSRangePrototype::s_info = { "RangePrototype", 0, &JSRangePrototypeTable, 0 };

JSObject* JSRangePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRange>(exec, globalObject);
}

bool JSRangePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSRangePrototype, JSObject>(exec, &JSRangePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSRange::s_info = { "Range", 0, &JSRangeTable, 0 };

JSRange::JSRange(PassRefPtr<Structure> structure, PassRefPtr<Range> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSRange::~JSRange()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSRange::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSRangePrototype(JSRangePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSRange::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRange, Base>(exec, &JSRangeTable, this, propertyName, slot);
}

JSValuePtr jsRangeStartContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->startContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeStartOffset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = jsNumber(exec, imp->startOffset(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeEndContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->endContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeEndOffset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = jsNumber(exec, imp->endOffset(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeCollapsed(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = jsBoolean(imp->collapsed(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeCommonAncestorContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(static_cast<JSRange*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->commonAncestorContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangeConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSRange*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSRange::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSRangeConstructor>(exec);
}

JSValuePtr jsRangePrototypeFunctionSetStart(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));
    int offset = args.at(exec, 1)->toInt32(exec);

    imp->setStart(refNode, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSetEnd(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));
    int offset = args.at(exec, 1)->toInt32(exec);

    imp->setEnd(refNode, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSetStartBefore(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->setStartBefore(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSetStartAfter(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->setStartAfter(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSetEndBefore(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->setEndBefore(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSetEndAfter(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->setEndAfter(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionCollapse(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    bool toStart = args.at(exec, 0)->toBoolean(exec);

    imp->collapse(toStart, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSelectNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->selectNode(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSelectNodeContents(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));

    imp->selectNodeContents(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionCompareBoundaryPoints(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Range::CompareHow how = static_cast<Range::CompareHow>(args.at(exec, 0)->toInt32(exec));
    Range* sourceRange = toRange(args.at(exec, 1));


    JSC::JSValuePtr result = jsNumber(exec, imp->compareBoundaryPoints(how, sourceRange, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionDeleteContents(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->deleteContents(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionExtractContents(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->extractContents(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionCloneContents(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->cloneContents(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionInsertNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* newNode = toNode(args.at(exec, 0));

    imp->insertNode(newNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionSurroundContents(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* newParent = toNode(args.at(exec, 0));

    imp->surroundContents(newParent, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionCloneRange(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->cloneRange(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionToString(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValuePtr result = jsString(exec, imp->toString(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionDetach(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->detach(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsRangePrototypeFunctionCreateContextualFragment(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& html = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->createContextualFragment(html, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionIntersectsNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->intersectsNode(refNode, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionCompareNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));


    JSC::JSValuePtr result = jsNumber(exec, imp->compareNode(refNode, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionComparePoint(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));
    int offset = args.at(exec, 1)->toInt32(exec);


    JSC::JSValuePtr result = jsNumber(exec, imp->comparePoint(refNode, offset, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsRangePrototypeFunctionIsPointInRange(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(exec, 0));
    int offset = args.at(exec, 1)->toInt32(exec);


    JSC::JSValuePtr result = jsBoolean(imp->isPointInRange(refNode, offset, ec));
    setDOMException(exec, ec);
    return result;
}

// Constant getters

JSValuePtr jsRangeSTART_TO_START(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsRangeSTART_TO_END(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsRangeEND_TO_END(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsRangeEND_TO_START(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValuePtr jsRangeNODE_BEFORE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsRangeNODE_AFTER(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsRangeNODE_BEFORE_AND_AFTER(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsRangeNODE_INSIDE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, Range* object)
{
    return getDOMObjectWrapper<JSRange>(exec, object);
}
Range* toRange(JSC::JSValuePtr value)
{
    return value->isObject(&JSRange::s_info) ? static_cast<JSRange*>(asObject(value))->impl() : 0;
}

}