struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 59 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//10. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//15. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//18. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//19. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//20. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//21. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//22. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//23. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//24. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//25. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//26. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//27. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//28. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//29. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//30. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//31. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//32. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//33. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//34. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//35. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//36. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//37. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//38. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//39. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//42. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//43. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//44. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//45. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//46. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//47. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//48. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//49. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//50. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//51. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//52. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//53. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//54. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//55. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//56. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//57. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//58. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
