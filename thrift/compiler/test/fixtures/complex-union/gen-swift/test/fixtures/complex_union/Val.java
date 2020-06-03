/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_union;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@ThriftStruct(value="Val", builder=Val.Builder.class)
public final class Val {
    @ThriftConstructor
    public Val(
        @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE) final String strVal,
        @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE) final int intVal,
        @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE) final Map<Short, String> typedefValue
    ) {
        this.strVal = strVal;
        this.intVal = intVal;
        this.typedefValue = typedefValue;
    }
    
    @ThriftConstructor
    protected Val() {
      this.strVal = null;
      this.intVal = 0;
      this.typedefValue = null;
    }
    
    public static class Builder {
        private String strVal = null;
        private int intVal = 0;
        private Map<Short, String> typedefValue = null;
    
        @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE)
        public Builder setStrVal(String strVal) {
            this.strVal = strVal;
            return this;
        }
        
        public String getStrVal() { return strVal; }
    
            @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE)
        public Builder setIntVal(int intVal) {
            this.intVal = intVal;
            return this;
        }
        
        public int getIntVal() { return intVal; }
    
            @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE)
        public Builder setTypedefValue(Map<Short, String> typedefValue) {
            this.typedefValue = typedefValue;
            return this;
        }
        
        public Map<Short, String> getTypedefValue() { return typedefValue; }
    
        public Builder() { }
        public Builder(Val other) {
            this.strVal = other.strVal;
            this.intVal = other.intVal;
            this.typedefValue = other.typedefValue;
        }
    
        @ThriftConstructor
        public Val build() {
            return new Val (
                this.strVal,
                this.intVal,
                this.typedefValue
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("Val");
    private final String strVal;
    public static final int _STRVAL = 1;
    private static final TField STR_VAL_FIELD_DESC = new TField("strVal", TType.STRING, (short)1);
    private final int intVal;
    public static final int _INTVAL = 2;
    private static final TField INT_VAL_FIELD_DESC = new TField("intVal", TType.I32, (short)2);
    private final Map<Short, String> typedefValue;
    public static final int _TYPEDEFVALUE = 9;
    private static final TField TYPEDEF_VALUE_FIELD_DESC = new TField("typedefValue", TType.MAP, (short)9);

    
    @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE)
    public String getStrVal() { return strVal; }
        
    @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE)
    public int getIntVal() { return intVal; }
        
    @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE)
    public Map<Short, String> getTypedefValue() { return typedefValue; }
    
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("strVal", strVal);
        helper.add("intVal", intVal);
        helper.add("typedefValue", typedefValue);
        return helper.toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        Val other = (Val)o;
    
        return
            Objects.equals(strVal, other.strVal) &&
            Objects.equals(intVal, other.intVal) &&
            Objects.equals(typedefValue, other.typedefValue) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            strVal,
            intVal,
            typedefValue
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static Val read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      Val.Builder builder = new Val.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _STRVAL:
          if (__field.type == TType.STRING) {
            String strVal = oprot.readString();
            builder.setStrVal(strVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _INTVAL:
          if (__field.type == TType.I32) {
            int intVal = oprot.readI32();
            builder.setIntVal(intVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _TYPEDEFVALUE:
          if (__field.type == TType.MAP) {
            Map<Short, String> typedefValue;
            {
            TMap _map = oprot.readMapBegin();
            if (_map.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            typedefValue = new HashMap<Short, String>(_map.size);
            for (int _i = 0; _i < _map.size; _i++) {
                
                short _key1 = oprot.readI16();

                String _value1 = oprot.readString();
                typedefValue.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setTypedefValue(typedefValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.strVal != null) {
        oprot.writeFieldBegin(STR_VAL_FIELD_DESC);
        oprot.writeString(this.strVal);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(INT_VAL_FIELD_DESC);
      oprot.writeI32(this.intVal);
      oprot.writeFieldEnd();
      if (this.typedefValue != null) {
        oprot.writeFieldBegin(TYPEDEF_VALUE_FIELD_DESC);
        Map<Short, String> _iter0 = this.typedefValue;
        oprot.writeMapBegin(new TMap(TType.I16, TType.STRING, _iter0.size()));
        for (Map.Entry<Short, String> _iter1 : _iter0.entrySet()) {
          oprot.writeI16(_iter1.getKey());
          oprot.writeString(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
