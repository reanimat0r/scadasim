//
// Generated file, do not edit! Created by opp_msgc 4.2 from applications/modbusApp/ModbusMessage.msg.
//

#ifndef _MODBUSMESSAGE_M_H_
#define _MODBUSMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "INETDefs.h"
// }}



/**
 * Class generated from <tt>applications/modbusApp/ModbusMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ModbusMessage {
 *     uint8_t pdu[];
 *     double replyDelay;
 *     bool closeConn;
 * }
 * </pre>
 */
class ModbusMessage : public ::cPacket
{
  protected:
    uint8_t *pdu_var; // array ptr
    unsigned int pdu_arraysize;
    double replyDelay_var;
    bool closeConn_var;

  private:
    void copy(const ModbusMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ModbusMessage&);

  public:
    ModbusMessage(const char *name=NULL, int kind=0);
    ModbusMessage(const ModbusMessage& other);
    virtual ~ModbusMessage();
    ModbusMessage& operator=(const ModbusMessage& other);
    virtual ModbusMessage *dup() const {return new ModbusMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setPduArraySize(unsigned int size);
    virtual unsigned int getPduArraySize() const;
    virtual uint8_t getPdu(unsigned int k) const;
    virtual void setPdu(unsigned int k, uint8_t pdu);
    virtual double getReplyDelay() const;
    virtual void setReplyDelay(double replyDelay);
    virtual bool getCloseConn() const;
    virtual void setCloseConn(bool closeConn);
};

inline void doPacking(cCommBuffer *b, ModbusMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ModbusMessage& obj) {obj.parsimUnpack(b);}


#endif // _MODBUSMESSAGE_M_H_