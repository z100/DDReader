/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/public/nsIClipboardDragDropHooks.idl
 */

#ifndef __gen_nsIClipboardDragDropHooks_h__
#define __gen_nsIClipboardDragDropHooks_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITransferable; /* forward declaration */

class nsIDragSession; /* forward declaration */

class nsIDOMEvent; /* forward declaration */


/* starting interface:    nsIClipboardDragDropHooks */
#define NS_ICLIPBOARDDRAGDROPHOOKS_IID_STR "e03e6c5e-0d84-4c0b-8739-e6b8d51922de"

#define NS_ICLIPBOARDDRAGDROPHOOKS_IID \
  {0xe03e6c5e, 0x0d84, 0x4c0b, \
    { 0x87, 0x39, 0xe6, 0xb8, 0xd5, 0x19, 0x22, 0xde }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIClipboardDragDropHooks : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICLIPBOARDDRAGDROPHOOKS_IID)

  /* boolean allowStartDrag (in nsIDOMEvent event); */
  NS_SCRIPTABLE NS_IMETHOD AllowStartDrag(nsIDOMEvent *event, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean allowDrop (in nsIDOMEvent event, in nsIDragSession session); */
  NS_SCRIPTABLE NS_IMETHOD AllowDrop(nsIDOMEvent *event, nsIDragSession *session, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean onCopyOrDrag (in nsIDOMEvent aEvent, in nsITransferable trans); */
  NS_SCRIPTABLE NS_IMETHOD OnCopyOrDrag(nsIDOMEvent *aEvent, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean onPasteOrDrop (in nsIDOMEvent event, in nsITransferable trans); */
  NS_SCRIPTABLE NS_IMETHOD OnPasteOrDrop(nsIDOMEvent *event, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIClipboardDragDropHooks, NS_ICLIPBOARDDRAGDROPHOOKS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICLIPBOARDDRAGDROPHOOKS \
  NS_SCRIPTABLE NS_IMETHOD AllowStartDrag(nsIDOMEvent *event, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AllowDrop(nsIDOMEvent *event, nsIDragSession *session, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnCopyOrDrag(nsIDOMEvent *aEvent, nsITransferable *trans, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnPasteOrDrop(nsIDOMEvent *event, nsITransferable *trans, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICLIPBOARDDRAGDROPHOOKS(_to) \
  NS_SCRIPTABLE NS_IMETHOD AllowStartDrag(nsIDOMEvent *event, PRBool *_retval NS_OUTPARAM) { return _to AllowStartDrag(event, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AllowDrop(nsIDOMEvent *event, nsIDragSession *session, PRBool *_retval NS_OUTPARAM) { return _to AllowDrop(event, session, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnCopyOrDrag(nsIDOMEvent *aEvent, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) { return _to OnCopyOrDrag(aEvent, trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnPasteOrDrop(nsIDOMEvent *event, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) { return _to OnPasteOrDrop(event, trans, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICLIPBOARDDRAGDROPHOOKS(_to) \
  NS_SCRIPTABLE NS_IMETHOD AllowStartDrag(nsIDOMEvent *event, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AllowStartDrag(event, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AllowDrop(nsIDOMEvent *event, nsIDragSession *session, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AllowDrop(event, session, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnCopyOrDrag(nsIDOMEvent *aEvent, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCopyOrDrag(aEvent, trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnPasteOrDrop(nsIDOMEvent *event, nsITransferable *trans, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPasteOrDrop(event, trans, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsClipboardDragDropHooks : public nsIClipboardDragDropHooks
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICLIPBOARDDRAGDROPHOOKS

  nsClipboardDragDropHooks();

private:
  ~nsClipboardDragDropHooks();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsClipboardDragDropHooks, nsIClipboardDragDropHooks)

nsClipboardDragDropHooks::nsClipboardDragDropHooks()
{
  /* member initializers and constructor code */
}

nsClipboardDragDropHooks::~nsClipboardDragDropHooks()
{
  /* destructor code */
}

/* boolean allowStartDrag (in nsIDOMEvent event); */
NS_IMETHODIMP nsClipboardDragDropHooks::AllowStartDrag(nsIDOMEvent *event, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean allowDrop (in nsIDOMEvent event, in nsIDragSession session); */
NS_IMETHODIMP nsClipboardDragDropHooks::AllowDrop(nsIDOMEvent *event, nsIDragSession *session, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean onCopyOrDrag (in nsIDOMEvent aEvent, in nsITransferable trans); */
NS_IMETHODIMP nsClipboardDragDropHooks::OnCopyOrDrag(nsIDOMEvent *aEvent, nsITransferable *trans, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean onPasteOrDrop (in nsIDOMEvent event, in nsITransferable trans); */
NS_IMETHODIMP nsClipboardDragDropHooks::OnPasteOrDrop(nsIDOMEvent *event, nsITransferable *trans, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIClipboardDragDropHooks_h__ */
