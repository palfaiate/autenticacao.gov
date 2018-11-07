/* SCAPSignatureServiceSoapBindingProxy.h
   Generated by gSOAP 2.8.49 for SCAP-Services.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef SCAPSignatureServiceSoapBindingProxy_H
#define SCAPSignatureServiceSoapBindingProxy_H
#include "SCAPH.h"

    class SOAP_CMAC SignatureServiceSoapBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        bool soap_own; ///< flag indicating that this context is owned by this proxy when context is shared
        /// Endpoint URL of service 'SignatureServiceSoapBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in SCAP-Services.h, if any
        /// Construct a proxy with new managing context
        SignatureServiceSoapBindingProxy();
        /// Copy constructor
        SignatureServiceSoapBindingProxy(const SignatureServiceSoapBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        SignatureServiceSoapBindingProxy(struct soap*);
        /// Constructor taking an endpoint URL
        SignatureServiceSoapBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~SignatureServiceSoapBindingProxy();
        /// Initializer used by constructors
        virtual void SignatureServiceSoapBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual SignatureServiceSoapBindingProxy *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        SignatureServiceSoapBindingProxy& operator=(const SignatureServiceSoapBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'Signature' (returns SOAP_OK or error code)
        virtual int Signature(_ns1__SignatureRequest *ns1__SignatureRequest, _ns1__SignatureResponse &ns1__SignatureResponse)
        { return this->Signature(NULL, NULL, ns1__SignatureRequest, ns1__SignatureResponse); }
        virtual int Signature(const char *soap_endpoint, const char *soap_action, _ns1__SignatureRequest *ns1__SignatureRequest, _ns1__SignatureResponse &ns1__SignatureResponse);
    };
#endif
