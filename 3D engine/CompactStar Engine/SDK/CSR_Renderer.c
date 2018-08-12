/****************************************************************************
 * ==> CSR_Renderer --------------------------------------------------------*
 ****************************************************************************
 * Description : This module provides the draw functions                    *
 * Developer   : Jean-Milost Reymond                                        *
 * Copyright   : 2017 - 2018, this file is part of the CompactStar Engine.  *
 *               You are free to copy or redistribute this file, modify it, *
 *               or use it for your own projects, commercial or not. This   *
 *               file is provided "as is", WITHOUT ANY WARRANTY OF ANY      *
 *               KIND. THE DEVELOPER IS NOT RESPONSIBLE FOR ANY DAMAGE OF   *
 *               ANY KIND, ANY LOSS OF DATA, OR ANY LOSS OF PRODUCTIVITY    *
 *               TIME THAT MAY RESULT FROM THE USAGE OF THIS SOURCE CODE,   *
 *               DIRECTLY OR NOT.                                           *
 ****************************************************************************/

#include "CSR_Renderer.h"

// std
#include <stdlib.h>

#ifdef CSR_USE_OPENGL
    #include "CSR_Renderer_OpenGL.h"
#endif

//---------------------------------------------------------------------------
// Shader functions
//---------------------------------------------------------------------------
void csrShaderEnable(const void* pShader)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLShaderEnable((CSR_OpenGLShader*)pShader);
    #else
        #warning "csrShaderEnable() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrShaderConnectProjectionMatrix(const void* pShader, const CSR_Matrix4* pMatrix)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLShaderConnectProjectionMatrix((CSR_OpenGLShader*)pShader, pMatrix);
    #else
        #warning "csrShaderConnectProjectionMatrix() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrShaderConnectViewMatrix(const void* pShader, const CSR_Matrix4* pMatrix)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLShaderConnectViewMatrix((CSR_OpenGLShader*)pShader, pMatrix);
    #else
        #warning "csrShaderConnectViewMatrix() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
// Draw functions
//---------------------------------------------------------------------------
void csrDrawBegin(const CSR_Color* pColor)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawBegin(pColor);
    #else
        #warning "csrDrawBegin() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawEnd(void)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawEnd();
    #else
        #warning "csrDrawEnd() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawLine(const CSR_Line* pLine, const void* pShader)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawLine(pLine, (CSR_OpenGLShader*)pShader);
    #else
        #warning "csrDrawLine() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawVertexBuffer(const CSR_VertexBuffer* pVB,
                         const void*             pShader,
                         const CSR_Array*        pMatrixArray)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawVertexBuffer(pVB, (CSR_OpenGLShader*)pShader, pMatrixArray);
    #else
        #warning "csrDrawVertexBuffer() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawMesh(const CSR_Mesh*    pMesh,
                 const void*        pShader,
                 const CSR_Array*   pMatrixArray,
                 const CSR_fOnGetID fOnGetID)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawMesh(pMesh, (CSR_OpenGLShader*)pShader, pMatrixArray, fOnGetID);
    #else
        #warning "csrDrawMesh() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawModel(const CSR_Model*   pModel,
                        size_t       index,
                  const void*        pShader,
                  const CSR_Array*   pMatrixArray,
                  const CSR_fOnGetID fOnGetID)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawModel(pModel, index, (CSR_OpenGLShader*)pShader, pMatrixArray, fOnGetID);
    #else
        #warning "csrDrawModel() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
void csrDrawMDL(const CSR_MDL*     pMDL,
                const void*        pShader,
                const CSR_Array*   pMatrixArray,
                      size_t       skinIndex,
                      size_t       modelIndex,
                      size_t       meshIndex,
                const CSR_fOnGetID fOnGetID)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLDrawMDL(pMDL,
                        (CSR_OpenGLShader*)pShader,
                         pMatrixArray,
                         skinIndex,
                         modelIndex,
                         meshIndex,
                         fOnGetID);
    #else
        #warning "csrDrawMDL() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
// State functions
//---------------------------------------------------------------------------
void csrStateEnableDepthMask(int value)
{
    #ifdef CSR_USE_OPENGL
        csrOpenGLStateEnableDepthMask(value);
    #else
        #warning "csrStateEnableDepthMask() isn't implemented and will not work on this platform"
    #endif
}
//---------------------------------------------------------------------------
