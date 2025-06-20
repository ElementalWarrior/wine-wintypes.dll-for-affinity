
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include <assert.h>
#include "winstring.h"
#include "wine/debug.h"
#include "objbase.h"

#include "rometadataresolution.h"
#include <activation.h>

WINE_DEFAULT_DEBUG_CHANNEL(wintypes_shim);

HRESULT WINAPI RoResolveNamespace(HSTRING name, HSTRING windowsMetaDataDir,
                                  DWORD packageGraphDirsCount, const HSTRING *packageGraphDirs,
                                  DWORD *metaDataFilePathsCount, HSTRING **metaDataFilePaths,
                                  DWORD *subNamespacesCount, HSTRING **subNamespaces)
{
    const WCHAR *path;
    HSTRING *str = malloc(sizeof(HSTRING)), *str2 = malloc(sizeof(HSTRING));

    WINE_FIXME("name %s, windowsMetaDataDir %s, metaDataFilePaths %p, subNamespaces %p stub!\n",
            wine_dbgstr_hstring(name), wine_dbgstr_hstring(windowsMetaDataDir),
            metaDataFilePaths, subNamespaces);

    if (!metaDataFilePaths && !subNamespaces)
        return E_INVALIDARG;

    WINE_FIXME("Returning C:\\windows\\system32\\WinMetadata\\Windows.winmd for all RoResolveNamespace calls\n");

    path = L"C:\\windows\\system32\\WinMetadata\\Windows.winmd";
    if(WindowsCreateString(path, wcslen(path), str) == S_OK) {
        *metaDataFilePaths = str;
        *metaDataFilePathsCount = 1;
    }

    return S_OK;
}
