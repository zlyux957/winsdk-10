//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This file is automatically generated.  Please do not edit it directly.
//
// File name: D2D1EffectAuthor_1.h
//---------------------------------------------------------------------------
#ifdef _MSC_VER
#pragma once
#endif // #ifdef _MSC_VER

#ifndef _D2D1_EFFECT_AUTHOR_1_H_
#define _D2D1_EFFECT_AUTHOR_1_H_

#ifndef _D2D1_3_H_
#include <d2d1_3.h>
#endif // #ifndef _D2D1_3_H_
#ifndef _D2D1_EFFECT_AUTHOR_H_
#include <d2d1effectauthor.h>
#endif // #ifndef _D2D1_EFFECT_AUTHOR_H_

#ifndef D2D_USE_C_DEFINITIONS



//+-----------------------------------------------------------------------------
//
//  Interface:
//      ID2D1EffectContext1
//
//  Synopsis:
//      The internal context handed to effect authors to create transforms from effects
//      and any other operation tied to context which is not useful to the application
//      facing API.
//
//------------------------------------------------------------------------------
interface DX_DECLARE_INTERFACE("84ab595a-fc81-4546-bacd-e8ef4d8abe7a") ID2D1EffectContext1  : public ID2D1EffectContext
{
    
    
    //
    // Creates a 3D lookup table for mapping a 3-channel input to a 3-channel output.
    // The table data must be provided in 4-channel format.
    //
    STDMETHOD(CreateLookupTable3D)(
        D2D1_BUFFER_PRECISION precision,
        _In_reads_(3) CONST UINT32 *extents,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount,
        _In_reads_(2) CONST UINT32 *strides,
        _Outptr_ ID2D1LookupTable3D **lookupTable 
        ) PURE;
}; // interface ID2D1EffectContext1



#endif


EXTERN_C CONST IID IID_ID2D1EffectContext1;


#ifdef D2D_USE_C_DEFINITIONS


typedef interface ID2D1EffectContext1 ID2D1EffectContext1;

typedef struct ID2D1EffectContext1Vtbl
{
    
    ID2D1EffectContextVtbl Base;
    
    
    STDMETHOD(CreateLookupTable3D)(
        ID2D1EffectContext1 *This,
        D2D1_BUFFER_PRECISION precision,
        _In_reads_(3) CONST UINT32 *extents,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount,
        _In_reads_(2) CONST UINT32 *strides,
        _Outptr_ ID2D1LookupTable3D **lookupTable 
        ) PURE;
} ID2D1EffectContext1Vtbl;

interface ID2D1EffectContext1
{
    CONST struct ID2D1EffectContext1Vtbl *lpVtbl;
};


#define ID2D1EffectContext1_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))

#define ID2D1EffectContext1_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))

#define ID2D1EffectContext1_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))

#define ID2D1EffectContext1_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.GetDpi((ID2D1EffectContext *)This, dpiX, dpiY))

#define ID2D1EffectContext1_CreateEffect(This, effectId, effect) \
    ((This)->lpVtbl->Base.CreateEffect((ID2D1EffectContext *)This, effectId, effect))

#define ID2D1EffectContext1_GetMaximumSupportedFeatureLevel(This, featureLevels, featureLevelsCount, maximumSupportedFeatureLevel) \
    ((This)->lpVtbl->Base.GetMaximumSupportedFeatureLevel((ID2D1EffectContext *)This, featureLevels, featureLevelsCount, maximumSupportedFeatureLevel))

#define ID2D1EffectContext1_CreateTransformNodeFromEffect(This, effect, transformNode) \
    ((This)->lpVtbl->Base.CreateTransformNodeFromEffect((ID2D1EffectContext *)This, effect, transformNode))

#define ID2D1EffectContext1_CreateBlendTransform(This, numInputs, blendDescription, transform) \
    ((This)->lpVtbl->Base.CreateBlendTransform((ID2D1EffectContext *)This, numInputs, blendDescription, transform))

#define ID2D1EffectContext1_CreateBorderTransform(This, extendModeX, extendModeY, transform) \
    ((This)->lpVtbl->Base.CreateBorderTransform((ID2D1EffectContext *)This, extendModeX, extendModeY, transform))

#define ID2D1EffectContext1_CreateOffsetTransform(This, offset, transform) \
    ((This)->lpVtbl->Base.CreateOffsetTransform((ID2D1EffectContext *)This, offset, transform))

#define ID2D1EffectContext1_CreateBoundsAdjustmentTransform(This, outputRectangle, transform) \
    ((This)->lpVtbl->Base.CreateBoundsAdjustmentTransform((ID2D1EffectContext *)This, outputRectangle, transform))

#define ID2D1EffectContext1_LoadPixelShader(This, shaderId, shaderBuffer, shaderBufferCount) \
    ((This)->lpVtbl->Base.LoadPixelShader((ID2D1EffectContext *)This, shaderId, shaderBuffer, shaderBufferCount))

#define ID2D1EffectContext1_LoadVertexShader(This, resourceId, shaderBuffer, shaderBufferCount) \
    ((This)->lpVtbl->Base.LoadVertexShader((ID2D1EffectContext *)This, resourceId, shaderBuffer, shaderBufferCount))

#define ID2D1EffectContext1_LoadComputeShader(This, resourceId, shaderBuffer, shaderBufferCount) \
    ((This)->lpVtbl->Base.LoadComputeShader((ID2D1EffectContext *)This, resourceId, shaderBuffer, shaderBufferCount))

#define ID2D1EffectContext1_IsShaderLoaded(This, shaderId) \
    ((This)->lpVtbl->Base.IsShaderLoaded((ID2D1EffectContext *)This, shaderId))

#define ID2D1EffectContext1_CreateResourceTexture(This, resourceId, resourceTextureProperties, data, strides, dataSize, resourceTexture) \
    ((This)->lpVtbl->Base.CreateResourceTexture((ID2D1EffectContext *)This, resourceId, resourceTextureProperties, data, strides, dataSize, resourceTexture))

#define ID2D1EffectContext1_FindResourceTexture(This, resourceId, resourceTexture) \
    ((This)->lpVtbl->Base.FindResourceTexture((ID2D1EffectContext *)This, resourceId, resourceTexture))

#define ID2D1EffectContext1_CreateVertexBuffer(This, vertexBufferProperties, resourceId, customVertexBufferProperties, buffer) \
    ((This)->lpVtbl->Base.CreateVertexBuffer((ID2D1EffectContext *)This, vertexBufferProperties, resourceId, customVertexBufferProperties, buffer))

#define ID2D1EffectContext1_FindVertexBuffer(This, resourceId, buffer) \
    ((This)->lpVtbl->Base.FindVertexBuffer((ID2D1EffectContext *)This, resourceId, buffer))

#define ID2D1EffectContext1_CreateColorContext(This, space, profile, profileSize, colorContext) \
    ((This)->lpVtbl->Base.CreateColorContext((ID2D1EffectContext *)This, space, profile, profileSize, colorContext))

#define ID2D1EffectContext1_CreateColorContextFromFilename(This, filename, colorContext) \
    ((This)->lpVtbl->Base.CreateColorContextFromFilename((ID2D1EffectContext *)This, filename, colorContext))

#define ID2D1EffectContext1_CreateColorContextFromWicColorContext(This, wicColorContext, colorContext) \
    ((This)->lpVtbl->Base.CreateColorContextFromWicColorContext((ID2D1EffectContext *)This, wicColorContext, colorContext))

#define ID2D1EffectContext1_CheckFeatureSupport(This, feature, featureSupportData, featureSupportDataSize) \
    ((This)->lpVtbl->Base.CheckFeatureSupport((ID2D1EffectContext *)This, feature, featureSupportData, featureSupportDataSize))

#define ID2D1EffectContext1_IsBufferPrecisionSupported(This, bufferPrecision) \
    ((This)->lpVtbl->Base.IsBufferPrecisionSupported((ID2D1EffectContext *)This, bufferPrecision))

#define ID2D1EffectContext1_CreateLookupTable3D(This, precision, extents, data, dataCount, strides, lookupTable) \
    ((This)->lpVtbl->CreateLookupTable3D(This, precision, extents, data, dataCount, strides, lookupTable))


#endif

#endif // #ifndef _D2D1_EFFECT_AUTHOR_1_H_
