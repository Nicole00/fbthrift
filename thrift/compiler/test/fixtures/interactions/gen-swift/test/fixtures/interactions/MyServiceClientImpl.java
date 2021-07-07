/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.interactions;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
public class MyServiceClientImpl extends AbstractThriftClient implements MyService {

    // Method Handlers
    private ThriftMethodHandler fooMethodHandler;
    // Interaction Handlers
    private ThriftMethodHandler frobnicateMethodHandler;
    private ThriftMethodHandler pingMethodHandler;
    // Interaction Handlers
    private ThriftMethodHandler frobnicateMethodHandler;
    private ThriftMethodHandler pingMethodHandler;
    // Interaction Handlers
    private ThriftMethodHandler frobnicateMethodHandler;

    // Method Exceptions
    private static final Class[] fooExceptions = new Class[] {
        org.apache.thrift.TException.class};
    // Interaction Exceptions
    private static final Class[] frobnicateExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] pingExceptions = new Class[] {
        org.apache.thrift.TException.class};
    // Interaction Exceptions
    private static final Class[] frobnicateExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] pingExceptions = new Class[] {
        org.apache.thrift.TException.class};
    // Interaction Exceptions
    private static final Class[] frobnicateExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyServiceClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      fooMethodHandler = methodHandlerMap.get("foo");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
      pingMethodHandler = methodHandlerMap.get("ping");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
      pingMethodHandler = methodHandlerMap.get("ping");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
    }

    public MyServiceClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      fooMethodHandler = methodHandlerMap.get("foo");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
      pingMethodHandler = methodHandlerMap.get("ping");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
      pingMethodHandler = methodHandlerMap.get("ping");
      // Set interaction handlers
      frobnicateMethodHandler = methodHandlerMap.get("frobnicate");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public void foo() throws org.apache.thrift.TException {
      fooWrapper(RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public void foo(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      fooWrapper(rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Void> fooWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(fooMethodHandler, fooExceptions, rpcOptions));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    public class MyInteractionImpl implements MyInteraction {
      private final long interactionId;

      MyInteractionImpl(long interactionId) {
        this.interactionId = interactionId;
      }


      public int frobnicate() throws org.apache.thrift.TException {
        return frobnicateWrapper(RpcOptions.EMPTY).getData();
      }

      public int frobnicate(
      RpcOptions rpcOptions) throws org.apache.thrift.TException {
        return frobnicateWrapper(rpcOptions).getData();
      }

      public ResponseWrapper<Integer> frobnicateWrapper(
      RpcOptions _rpcOptions) throws org.apache.thrift.TException {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return FutureUtil.get(executeWrapperWithOptions(frobnicateMethodHandler, frobnicateExceptions, rpcOptions));
        } catch (Throwable t) {
          if (t instanceof org.apache.thrift.TException) {
            throw (org.apache.thrift.TException) t;
          }
          throw new org.apache.thrift.TException(t);
        }
      }


      public void ping() throws org.apache.thrift.TException {
        pingWrapper(RpcOptions.EMPTY).getData();
      }

      public void ping(
      RpcOptions rpcOptions) throws org.apache.thrift.TException {
        pingWrapper(rpcOptions).getData();
      }

      public ResponseWrapper<Void> pingWrapper(
      RpcOptions _rpcOptions) throws org.apache.thrift.TException {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return FutureUtil.get(executeWrapperWithOptions(pingMethodHandler, pingExceptions, rpcOptions));
        } catch (Throwable t) {
          if (t instanceof org.apache.thrift.TException) {
            throw (org.apache.thrift.TException) t;
          }
          throw new org.apache.thrift.TException(t);
        }
      }

      @java.lang.Override
      public void close() {
        activeInteractions.remove(interactionId);
      }

      private RpcOptions updateRpcOptions(RpcOptions _rpcOptions) {
        RpcOptions.Builder builder = new RpcOptions.Builder(_rpcOptions);
        if (activeInteractions.contains(interactionId)) {
          builder.setInteractionId(interactionId);
        } else {
          builder.setCreateInteractionId(interactionId).setInteractionId(0L);
          activeInteractions.add(interactionId);
        }
        return builder.build();
      }
    }

    public MyInteraction createMyInteraction() {
        return new MyInteractionImpl(interactionCounter.incrementAndGet());
    }


    public class MyInteractionFastImpl implements MyInteractionFast {
      private final long interactionId;

      MyInteractionFastImpl(long interactionId) {
        this.interactionId = interactionId;
      }


      public int frobnicate() throws org.apache.thrift.TException {
        return frobnicateWrapper(RpcOptions.EMPTY).getData();
      }

      public int frobnicate(
      RpcOptions rpcOptions) throws org.apache.thrift.TException {
        return frobnicateWrapper(rpcOptions).getData();
      }

      public ResponseWrapper<Integer> frobnicateWrapper(
      RpcOptions _rpcOptions) throws org.apache.thrift.TException {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return FutureUtil.get(executeWrapperWithOptions(frobnicateMethodHandler, frobnicateExceptions, rpcOptions));
        } catch (Throwable t) {
          if (t instanceof org.apache.thrift.TException) {
            throw (org.apache.thrift.TException) t;
          }
          throw new org.apache.thrift.TException(t);
        }
      }


      public void ping() throws org.apache.thrift.TException {
        pingWrapper(RpcOptions.EMPTY).getData();
      }

      public void ping(
      RpcOptions rpcOptions) throws org.apache.thrift.TException {
        pingWrapper(rpcOptions).getData();
      }

      public ResponseWrapper<Void> pingWrapper(
      RpcOptions _rpcOptions) throws org.apache.thrift.TException {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return FutureUtil.get(executeWrapperWithOptions(pingMethodHandler, pingExceptions, rpcOptions));
        } catch (Throwable t) {
          if (t instanceof org.apache.thrift.TException) {
            throw (org.apache.thrift.TException) t;
          }
          throw new org.apache.thrift.TException(t);
        }
      }

      @java.lang.Override
      public void close() {
        activeInteractions.remove(interactionId);
      }

      private RpcOptions updateRpcOptions(RpcOptions _rpcOptions) {
        RpcOptions.Builder builder = new RpcOptions.Builder(_rpcOptions);
        if (activeInteractions.contains(interactionId)) {
          builder.setInteractionId(interactionId);
        } else {
          builder.setCreateInteractionId(interactionId).setInteractionId(0L);
          activeInteractions.add(interactionId);
        }
        return builder.build();
      }
    }

    public MyInteractionFast createMyInteractionFast() {
        return new MyInteractionFastImpl(interactionCounter.incrementAndGet());
    }


    public class SerialInteractionImpl implements SerialInteraction {
      private final long interactionId;

      SerialInteractionImpl(long interactionId) {
        this.interactionId = interactionId;
      }


      public void frobnicate() throws org.apache.thrift.TException {
        frobnicateWrapper(RpcOptions.EMPTY).getData();
      }

      public void frobnicate(
      RpcOptions rpcOptions) throws org.apache.thrift.TException {
        frobnicateWrapper(rpcOptions).getData();
      }

      public ResponseWrapper<Void> frobnicateWrapper(
      RpcOptions _rpcOptions) throws org.apache.thrift.TException {
        try {
          RpcOptions rpcOptions = updateRpcOptions(_rpcOptions);
          return FutureUtil.get(executeWrapperWithOptions(frobnicateMethodHandler, frobnicateExceptions, rpcOptions));
        } catch (Throwable t) {
          if (t instanceof org.apache.thrift.TException) {
            throw (org.apache.thrift.TException) t;
          }
          throw new org.apache.thrift.TException(t);
        }
      }

      @java.lang.Override
      public void close() {
        activeInteractions.remove(interactionId);
      }

      private RpcOptions updateRpcOptions(RpcOptions _rpcOptions) {
        RpcOptions.Builder builder = new RpcOptions.Builder(_rpcOptions);
        if (activeInteractions.contains(interactionId)) {
          builder.setInteractionId(interactionId);
        } else {
          builder.setCreateInteractionId(interactionId).setInteractionId(0L);
          activeInteractions.add(interactionId);
        }
        return builder.build();
      }
    }

    public SerialInteraction createSerialInteraction() {
        return new SerialInteractionImpl(interactionCounter.incrementAndGet());
    }
}
