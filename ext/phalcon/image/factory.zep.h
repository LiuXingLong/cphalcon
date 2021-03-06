
extern zend_class_entry *phalcon_image_factory_ce;

ZEPHIR_INIT_CLASS(Phalcon_Image_Factory);

PHP_METHOD(Phalcon_Image_Factory, load);
PHP_METHOD(Phalcon_Image_Factory, loadClass);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_image_factory_load, 0, 0, 1)
	ZEND_ARG_INFO(0, config)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_image_factory_loadclass, 0, 0, 2)
	ZEND_ARG_INFO(0, namespace)
	ZEND_ARG_INFO(0, config)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_image_factory_method_entry) {
	PHP_ME(Phalcon_Image_Factory, load, arginfo_phalcon_image_factory_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Image_Factory, loadClass, arginfo_phalcon_image_factory_loadclass, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC)
	PHP_FE_END
};
