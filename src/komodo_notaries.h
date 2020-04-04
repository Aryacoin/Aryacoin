/******************************************************************************
 * Copyright © 2014-2019 The SuperNET Developers.                             *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * SuperNET software, including this file may be copied, modified, propagated *
 * or distributed except according to the terms contained in the LICENSE file *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

 // KMD Notary Seasons 
 // 1: ENDS: May 1st 2018 1530921600
 // 2: ENDS: July 15th 2019 1563148800 -> estimated height 2430952
 // 3: 3rd season ending isnt known, so use very far times in future.
 // to add 4th season, change NUM_KMD_SEASONS to 4, add height of activation for third season ending one spot before 999999999.
 #define NUM_KMD_SEASONS 3
 #define NUM_KMD_NOTARIES 64
 // first season had no third party coins, so it ends at block 0. 
 // second season ends at approx block 2430952, Please check this it should be as close as possible to July 15th 0:00 UTC!!!!!!!
 // third season ending height is unknown so it set to very very far in future. 
 static const int32_t KMD_SEASON_HEIGHTS[NUM_KMD_SEASONS] = {0, 335000, 999999999};

 // Era array of pubkeys. Add extra seasons to bottom as requried, after adding appropriate info above. 
 static const char *notaries_elected[NUM_KMD_SEASONS][NUM_KMD_NOTARIES][2] =
 {
     {
         { "0_jl777_testA", "03b7621b44118017a16043f19b30cc8a4cfe068ac4e42417bae16ba460c80f3828" },
         { "0_jl777_testB", "02ebfc784a4ba768aad88d44d1045d240d47b26e248cafaf1c5169a42d7a61d344" },
         { "0_kolo_testA", "0287aa4b73988ba26cf6565d815786caf0d2c4af704d7883d163ee89cd9977edec" },
         { "artik_AR", "029acf1dcd9f5ff9c455f8bb717d4ae0c703e089d16cf8424619c491dff5994c90" },
         { "artik_EU", "03f54b2c24f82632e3cdebe4568ba0acf487a80f8a89779173cdb78f74514847ce" },
         { "artik_NA", "0224e31f93eff0cc30eaf0b2389fbc591085c0e122c4d11862c1729d090106c842" },
         { "artik_SH", "02bdd8840a34486f38305f311c0e2ae73e84046f6e9c3dd3571e32e58339d20937" },
         { "badass_EU", "0209d48554768dd8dada988b98aca23405057ac4b5b46838a9378b95c3e79b9b9e" },
         { "badass_NA", "02afa1a9f948e1634a29dc718d218e9d150c531cfa852843a1643a02184a63c1a7" },
         { "badass_SH", "026b49dd3923b78a592c1b475f208e23698d3f085c4c3b4906a59faf659fd9530b" },
         { "crackers_EU", "03bc819982d3c6feb801ec3b720425b017d9b6ee9a40746b84422cbbf929dc73c3" }, // 10
         { "crackers_NA", "03205049103113d48c7c7af811b4c8f194dafc43a50d5313e61a22900fc1805b45" },
         { "crackers_SH", "02be28310e6312d1dd44651fd96f6a44ccc269a321f907502aae81d246fabdb03e" },
         { "durerus_EU", "02bcbd287670bdca2c31e5d50130adb5dea1b53198f18abeec7211825f47485d57" },
         { "etszombi_AR", "031c79168d15edabf17d9ec99531ea9baa20039d0cdc14d9525863b83341b210e9" },
         { "etszombi_EU", "0281b1ad28d238a2b217e0af123ce020b79e91b9b10ad65a7917216eda6fe64bf7" }, // 15
         { "etszombi_SH", "025d7a193c0757f7437fad3431f027e7b5ed6c925b77daba52a8755d24bf682dde" },
         { "farl4web_EU", "0300ecf9121cccf14cf9423e2adb5d98ce0c4e251721fa345dec2e03abeffbab3f" },
         { "farl4web_SH", "0396bb5ed3c57aa1221d7775ae0ff751e4c7dc9be220d0917fa8bbdf670586c030" },
         { "fullmoon_AR", "0254b1d64840ce9ff6bec9dd10e33beb92af5f7cee628f999cb6bc0fea833347cc" },
         { "fullmoon_NA", "031fb362323b06e165231c887836a8faadb96eda88a79ca434e28b3520b47d235b" }, // 20
         { "fullmoon_SH", "030e12b42ec33a80e12e570b6c8274ce664565b5c3da106859e96a7208b93afd0d" },
         { "grewal_NA", "03adc0834c203d172bce814df7c7a5e13dc603105e6b0adabc942d0421aefd2132" },
         { "grewal_SH", "03212a73f5d38a675ee3cdc6e82542a96c38c3d1c79d25a1ed2e42fcf6a8be4e68" },
         { "indenodes_AR", "02ec0fa5a40f47fd4a38ea5c89e375ad0b6ddf4807c99733c9c3dc15fb978ee147" },
         { "indenodes_EU", "0221387ff95c44cb52b86552e3ec118a3c311ca65b75bf807c6c07eaeb1be8303c" },
         { "indenodes_NA", "02698c6f1c9e43b66e82dbb163e8df0e5a2f62f3a7a882ca387d82f86e0b3fa988" },
         { "indenodes_SH", "0334e6e1ec8285c4b85bd6dae67e17d67d1f20e7328efad17ce6fd24ae97cdd65e" },
         { "jeezy_EU", "023cb3e593fb85c5659688528e9a4f1c4c7f19206edc7e517d20f794ba686fd6d6" },
         { "jsgalt_NA", "027b3fb6fede798cd17c30dbfb7baf9332b3f8b1c7c513f443070874c410232446" },
         { "karasugoi_NA", "02a348b03b9c1a8eac1b56f85c402b041c9bce918833f2ea16d13452309052a982" }, // 30
         { "kashifali_EU", "033777c52a0190f261c6f66bd0e2bb299d30f012dcb8bfff384103211edb8bb207" },
         { "kolo_AR", "03016d19344c45341e023b72f9fb6e6152fdcfe105f3b4f50b82a4790ff54e9dc6" },
         { "kolo_SH", "02aa24064500756d9b0959b44d5325f2391d8e95c6127e109184937152c384e185" },
         { "metaphilibert_AR", "02adad675fae12b25fdd0f57250b0caf7f795c43f346153a31fe3e72e7db1d6ac6" },
         { "movecrypto_AR", "022783d94518e4dc77cbdf1a97915b29f427d7bc15ea867900a76665d3112be6f3" },
         { "movecrypto_EU", "021ab53bc6cf2c46b8a5456759f9d608966eff87384c2b52c0ac4cc8dd51e9cc42" },
         { "movecrypto_NA", "02efb12f4d78f44b0542d1c60146738e4d5506d27ec98a469142c5c84b29de0a80" },
         { "movecrypto_SH", "031f9739a3ebd6037a967ce1582cde66e79ea9a0551c54731c59c6b80f635bc859" },
         { "muros_AR", "022d77402fd7179335da39479c829be73428b0ef33fb360a4de6890f37c2aa005e" },
         { "noashh_AR", "029d93ef78197dc93892d2a30e5a54865f41e0ca3ab7eb8e3dcbc59c8756b6e355" }, // 40
         { "noashh_EU", "02061c6278b91fd4ac5cab4401100ffa3b2d5a277e8f71db23401cc071b3665546" },
         { "noashh_NA", "033c073366152b6b01535e15dd966a3a8039169584d06e27d92a69889b720d44e1" },
         { "nxtswe_EU", "032fb104e5eaa704a38a52c126af8f67e870d70f82977e5b2f093d5c1c21ae5899" },
         { "polycryptoblog_NA", "02708dcda7c45fb54b78469673c2587bfdd126e381654819c4c23df0e00b679622" },
         { "pondsea_AR", "032e1c213787312099158f2d74a89e8240a991d162d4ce8017d8504d1d7004f735" },
         { "pondsea_EU", "0225aa6f6f19e543180b31153d9e6d55d41bc7ec2ba191fd29f19a2f973544e29d" },
         { "pondsea_NA", "031bcfdbb62268e2ff8dfffeb9ddff7fe95fca46778c77eebff9c3829dfa1bb411" },
         { "pondsea_SH", "02209073bc0943451498de57f802650311b1f12aa6deffcd893da198a544c04f36" },
         { "popcornbag_AR", "02761f106fb34fbfc5ddcc0c0aa831ed98e462a908550b280a1f7bd32c060c6fa3" },
         { "popcornbag_NA", "03c6085c7fdfff70988fda9b197371f1caf8397f1729a844790e421ee07b3a93e8" }, // 50
         { "ptytrader_NA", "0328c61467148b207400b23875234f8a825cce65b9c4c9b664f47410b8b8e3c222" },
         { "ptytrader_SH", "0250c93c492d8d5a6b565b90c22bee07c2d8701d6118c6267e99a4efd3c7748fa4" },
         { "rnr_AR", "029bdb08f931c0e98c2c4ba4ef45c8e33a34168cb2e6bf953cef335c359d77bfcd" },
         { "rnr_EU", "03f5c08dadffa0ffcafb8dd7ffc38c22887bd02702a6c9ac3440deddcf2837692b" },
         { "rnr_NA", "02e17c5f8c3c80f584ed343b8dcfa6d710dfef0889ec1e7728ce45ce559347c58c" },
         { "rnr_SH", "037536fb9bdfed10251f71543fb42679e7c52308bcd12146b2568b9a818d8b8377" },
         { "titomane_AR", "03cda6ca5c2d02db201488a54a548dbfc10533bdc275d5ea11928e8d6ab33c2185" },
         { "titomane_EU", "02e41feded94f0cc59f55f82f3c2c005d41da024e9a805b41105207ef89aa4bfbd" },
         { "titomane_SH", "035f49d7a308dd9a209e894321f010d21b7793461b0c89d6d9231a3fe5f68d9960" },
         { "vanbreuk_EU", "024f3cad7601d2399c131fd070e797d9cd8533868685ddbe515daa53c2e26004c3" }, // 60
         { "xrobesx_NA", "03f0cc6d142d14a40937f12dbd99dbd9021328f45759e26f1877f2a838876709e1" },
         { "xxspot1_XX", "02ef445a392fcaf3ad4176a5da7f43580e8056594e003eba6559a713711a27f955" },
         { "xxspot2_XX", "03d85b221ea72ebcd25373e7961f4983d12add66a92f899deaf07bab1d8b6f5573" }
     },
     {
         {"0dev1_jl777", "03b7621b44118017a16043f19b30cc8a4cfe068ac4e42417bae16ba460c80f3828" },
         {"0dev2_kolo", "030f34af4b908fb8eb2099accb56b8d157d49f6cfb691baa80fdd34f385efed961" },
         {"0dev3_kolo", "025af9d2b2a05338478159e9ac84543968fd18c45fd9307866b56f33898653b014" },
         {"0dev4_decker", "028eea44a09674dda00d88ffd199a09c9b75ba9782382cc8f1e97c0fd565fe5707" },
         {"a-team_SH", "03b59ad322b17cb94080dc8e6dc10a0a865de6d47c16fb5b1a0b5f77f9507f3cce" },
         {"artik_AR", "029acf1dcd9f5ff9c455f8bb717d4ae0c703e089d16cf8424619c491dff5994c90" },
         {"artik_EU", "03f54b2c24f82632e3cdebe4568ba0acf487a80f8a89779173cdb78f74514847ce" },
         {"artik_NA", "0224e31f93eff0cc30eaf0b2389fbc591085c0e122c4d11862c1729d090106c842" },
         {"artik_SH", "02bdd8840a34486f38305f311c0e2ae73e84046f6e9c3dd3571e32e58339d20937" },
         {"badass_EU", "0209d48554768dd8dada988b98aca23405057ac4b5b46838a9378b95c3e79b9b9e" },
         {"badass_NA", "02afa1a9f948e1634a29dc718d218e9d150c531cfa852843a1643a02184a63c1a7" }, // 10
         {"batman_AR", "033ecb640ec5852f42be24c3bf33ca123fb32ced134bed6aa2ba249cf31b0f2563" },
         {"batman_SH", "02ca5898931181d0b8aafc75ef56fce9c43656c0b6c9f64306e7c8542f6207018c" },
         {"ca333_EU", "03fc87b8c804f12a6bd18efd43b0ba2828e4e38834f6b44c0bfee19f966a12ba99" },
         {"chainmakers_EU", "02f3b08938a7f8d2609d567aebc4989eeded6e2e880c058fdf092c5da82c3bc5ee" },
         {"chainmakers_NA", "0276c6d1c65abc64c8559710b8aff4b9e33787072d3dda4ec9a47b30da0725f57a" },
         {"chainstrike_SH", "0370bcf10575d8fb0291afad7bf3a76929734f888228bc49e35c5c49b336002153" },
         {"cipi_AR", "02c4f89a5b382750836cb787880d30e23502265054e1c327a5bfce67116d757ce8" },
         {"cipi_NA", "02858904a2a1a0b44df4c937b65ee1f5b66186ab87a751858cf270dee1d5031f18" },
         {"crackers_EU", "03bc819982d3c6feb801ec3b720425b017d9b6ee9a40746b84422cbbf929dc73c3" },
         {"crackers_NA", "03205049103113d48c7c7af811b4c8f194dafc43a50d5313e61a22900fc1805b45" }, // 20
         {"dwy_EU", "0259c646288580221fdf0e92dbeecaee214504fdc8bbdf4a3019d6ec18b7540424" },
         {"emmanux_SH", "033f316114d950497fc1d9348f03770cd420f14f662ab2db6172df44c389a2667a" },
         {"etszombi_EU", "0281b1ad28d238a2b217e0af123ce020b79e91b9b10ad65a7917216eda6fe64bf7" },
         {"fullmoon_AR", "03380314c4f42fa854df8c471618751879f9e8f0ff5dbabda2bd77d0f96cb35676" },
         {"fullmoon_NA", "030216211d8e2a48bae9e5d7eb3a42ca2b7aae8770979a791f883869aea2fa6eef" },
         {"fullmoon_SH", "03f34282fa57ecc7aba8afaf66c30099b5601e98dcbfd0d8a58c86c20d8b692c64" },
         {"goldenman_EU", "02d6f13a8f745921cdb811e32237bb98950af1a5952be7b3d429abd9152f8e388d" },
         {"indenodes_AR", "02ec0fa5a40f47fd4a38ea5c89e375ad0b6ddf4807c99733c9c3dc15fb978ee147" },
         {"indenodes_EU", "0221387ff95c44cb52b86552e3ec118a3c311ca65b75bf807c6c07eaeb1be8303c" },
         {"indenodes_NA", "02698c6f1c9e43b66e82dbb163e8df0e5a2f62f3a7a882ca387d82f86e0b3fa988" }, // 30
         {"indenodes_SH", "0334e6e1ec8285c4b85bd6dae67e17d67d1f20e7328efad17ce6fd24ae97cdd65e" },
         {"jackson_AR", "038ff7cfe34cb13b524e0941d5cf710beca2ffb7e05ddf15ced7d4f14fbb0a6f69" },
         {"jeezy_EU", "023cb3e593fb85c5659688528e9a4f1c4c7f19206edc7e517d20f794ba686fd6d6" },
         {"karasugoi_NA", "02a348b03b9c1a8eac1b56f85c402b041c9bce918833f2ea16d13452309052a982" },
         {"komodoninja_EU", "038e567b99806b200b267b27bbca2abf6a3e8576406df5f872e3b38d30843cd5ba" },
         {"komodoninja_SH", "033178586896915e8456ebf407b1915351a617f46984001790f0cce3d6f3ada5c2" },
         {"komodopioneers_SH", "033ace50aedf8df70035b962a805431363a61cc4e69d99d90726a2d48fb195f68c" },
         {"libscott_SH", "03301a8248d41bc5dc926088a8cf31b65e2daf49eed7eb26af4fb03aae19682b95" },
         {"lukechilds_AR", "031aa66313ee024bbee8c17915cf7d105656d0ace5b4a43a3ab5eae1e14ec02696" },
         {"madmax_AR", "03891555b4a4393d655bf76f0ad0fb74e5159a615b6925907678edc2aac5e06a75" }, // 40
         {"meshbits_AR", "02957fd48ae6cb361b8a28cdb1b8ccf5067ff68eb1f90cba7df5f7934ed8eb4b2c" },
         {"meshbits_SH", "025c6e94877515dfd7b05682b9cc2fe4a49e076efe291e54fcec3add78183c1edb" },
         {"metaphilibert_AR", "02adad675fae12b25fdd0f57250b0caf7f795c43f346153a31fe3e72e7db1d6ac6" },
         {"metaphilibert_SH", "0284af1a5ef01503e6316a2ca4abf8423a794e9fc17ac6846f042b6f4adedc3309" },
         {"patchkez_SH", "0296270f394140640f8fa15684fc11255371abb6b9f253416ea2734e34607799c4" },
         {"pbca26_NA", "0276aca53a058556c485bbb60bdc54b600efe402a8b97f0341a7c04803ce204cb5" },
         {"peer2cloud_AR", "034e5563cb885999ae1530bd66fab728e580016629e8377579493b386bf6cebb15" },
         {"peer2cloud_SH", "03396ac453b3f23e20f30d4793c5b8ab6ded6993242df4f09fd91eb9a4f8aede84" },
         {"polycryptoblog_NA", "02708dcda7c45fb54b78469673c2587bfdd126e381654819c4c23df0e00b679622" },
         {"hyper_AR", "020f2f984d522051bd5247b61b080b4374a7ab389d959408313e8062acad3266b4" }, // 50
         {"hyper_EU", "03d00cf9ceace209c59fb013e112a786ad583d7de5ca45b1e0df3b4023bb14bf51" },
         {"hyper_SH", "0383d0b37f59f4ee5e3e98a47e461c861d49d0d90c80e9e16f7e63686a2dc071f3" },
         {"hyper_NA", "03d91c43230336c0d4b769c9c940145a8c53168bf62e34d1bccd7f6cfc7e5592de" },
         {"popcornbag_AR", "02761f106fb34fbfc5ddcc0c0aa831ed98e462a908550b280a1f7bd32c060c6fa3" },
         {"popcornbag_NA", "03c6085c7fdfff70988fda9b197371f1caf8397f1729a844790e421ee07b3a93e8" },
         {"alien_AR", "0348d9b1fc6acf81290405580f525ee49b4749ed4637b51a28b18caa26543b20f0" },
         {"alien_EU", "020aab8308d4df375a846a9e3b1c7e99597b90497efa021d50bcf1bbba23246527" },
         {"thegaltmines_NA", "031bea28bec98b6380958a493a703ddc3353d7b05eb452109a773eefd15a32e421" },
         {"titomane_AR", "029d19215440d8cb9cc6c6b7a4744ae7fb9fb18d986e371b06aeb34b64845f9325" },
         {"titomane_EU", "0360b4805d885ff596f94312eed3e4e17cb56aa8077c6dd78d905f8de89da9499f" }, // 60
         {"titomane_SH", "03573713c5b20c1e682a2e8c0f8437625b3530f278e705af9b6614de29277a435b" },
         {"webworker01_NA", "03bb7d005e052779b1586f071834c5facbb83470094cff5112f0072b64989f97d7" },
         {"xrobesx_NA", "03f0cc6d142d14a40937f12dbd99dbd9021328f45759e26f1877f2a838876709e1" },
     },
     {
                {"madmax_NA", "02ef81a360411adf71184ff04d0c5793fc41fd1d7155a28dd909f21f35f4883ac1" },
        {"alright_AR", "036a6bca1c2a8166f79fa8a979662892742346cc972b432f8e61950a358d705517" },
        {"strob_NA", "02049202f3872877e81035549f6f3a0f868d0ad1c9b0e0d2b48b1f30324255d26d" },
       {"hunter_EU", "0378224b4e9d8a0083ce36f2963ec0a4e231ec06b0c780de108e37f41181a89f6a" },
        {"phm87_SH", "03889a10f9df2caef57220628515693cf25316fe1b0693b0241419e75d0d0e66ed" },
        {"chainmakers_NA", "030e4822bddba10eb50d52d7da13106486651e4436962078ee8d681bc13f4993e9" },
        {"indenodes_EU", "03a416533cace0814455a1bb1cd7861ce825a543c6f6284a432c4c8d8875b7ace9" },
        {"blackjok3r_SH", "03d23bb5aad3c20414078472220cc5c26bc5aeb41e43d72c99158d450f714d743a" },
        {"chainmakers_EU", "034f8c0a504856fb3d80a94c3aa78828c1152daf8ccc45a17c450f32a1e242bb0c" },
        {"titomane_AR", "0358cd6d7460654a0ddd5125dd6fa0402d0719999444c6cc3888689a0b4446136a" },
        {"fullmoon_SH", "0275031fa79846c5d667b1f7c4219c487d439cd367dd294f73b5ecd55b4e673254" },
        {"indenodes_NA", "02b3908eda4078f0e9b6704451cdc24d418e899c0f515fab338d7494da6f0a647b" },
        {"chmex_EU", "03e5b7ab96b7271ecd585d6f22807fa87da374210a843ec3a90134cbf4a62c3db1" },
        {"metaphilibert_SH", "03b21ff042bf1730b28bde43f44c064578b41996117ac7634b567c3773089e3be3" },
        {"ca333_DEV", "029c0342ce2a4f9146c7d1ee012b26f5c2df78b507fb4461bf48df71b4e3031b56" },
        {"cipi_NA", "034406ac4cf94e84561c5d3f25384dd59145e92fefc5972a037dc6a44bfa286688" },
        {"pungocloud_SH", "0203064e291045187927cc35ed350e046bba604e324bb0e3b214ea83c74c4713b1" },
        {"voskcoin_EU", "037bfd946f1dd3736ddd2cb1a0731f8b83de51be5d1be417496fbc419e203bc1fe" },
       {"decker_DEV", "02fca8ee50e49f480de275745618db7b0b3680b0bdcce7dcae7d2e0fd5c3345744" },
        {"cryptoeconomy_EU", "037d04b7d16de61a44a3fc766bea4b7791023a36675d6cee862fe53defd04dd8f2" },
        {"etszombi_EU", "02f65da26061d1b9f1756a274918a37e83086dbfe9a43d2f0b35b9d2f593b31907" },
       {"karasugoi_NA", "024ba10f7f5325fd6ec6cab50c5242d142d00fab3537c0002097c0e98f72014177" },
        {"pirate_AR", "0353e2747f89968741c24f254caec24f9f49a894a0039ee9ba09234fcbad75c77d" },
        {"metaphilibert_AR", "0239e34ad22957bbf4c8df824401f237b2afe8d40f7a645ecd43e8f27dde1ab0da" },
        {"zatjum_SH", "03643c3b0a07a34f6ae7b048832e0216b935408dfc48b0c7d3d4faceb38841f3f3" },
        {"madmax_AR", "038735b4f6881925e5a9b14275af80fa2b712c8bd57eef26b97e5b153218890e38" },
        {"lukechilds_NA", "024607d85ea648511fa50b13f29d16beb2c3a248c586b449707d7be50a6060cf50" },
        {"cipi_AR", "025b7655826f5fd3a807cbb4918ef9f02fe64661153ca170db981e9b0861f8c5ad" },
        {"tonyl_AR", "03a8db38075c80348889871b4318b0a79a1fd7e9e21daefb4ca6e4f05e5963569c" },
        {"infotech_DEV", "0399ff59b0244103486a94acf1e4a928235cb002b20e26a6f3163b4a0d5e62db91" },
        {"fullmoon_NA", "02adf6e3cb8a3c94d769102aec9faf2cb073b7f2979ce64efb1161a596a8d16312" },
        {"etszombi_AR", "03c786702b81e0122157739c8e2377cf945998d36c0d187ec5c5ff95855848dfdd" },
        {"node-9_EU", "024f2402daddee0c8169ccd643e5536c2cf95b9690391c370a65c9dd0169fc3dc6" },
        {"phba2061_EU", "02dc98f064e3bf26a251a269893b280323c83f1a4d4e6ccd5e84986cc3244cb7c9" },
        {"indenodes_AR", "0242778789986d614f75bcf629081651b851a12ab1cc10c73995b27b90febb75a2" },
        {"and1-89_EU", "029f5a4c6046de880cc95eb448d20c80918339daff7d71b73dd3921895559d7ca3" },
        {"komodopioneers_SH", "02ae196a1e93444b9fcac2b0ccee428a4d9232a00b3a508484b5bccaedc9bac55e" },
        {"komodopioneers_EU", "03c7fef345ca6b5326de9d5a38498638801eee81bfea4ca8ffc3dacac43c27b14d" },
       {"d0ct0r_NA", "0235b211469d7c1881d30ab647e0d6ddb4daf9466f60e85e6a33a92e39dedde3a7" },
        {"kolo_DEV", "03dc7c71a5ef7104f81e62928446c4216d6e9f68d944c893a21d7a0eba74b1cb7c" },
        {"peer2cloud_AR", "0351c784d966dbb79e1bab4fad7c096c1637c98304854dcdb7d5b5aeceb94919b4" },
        {"webworker01_SH", "0221365d89a6f6373b15daa4a50d56d34ad1b4b8a48a7fd090163b6b5a5ecd7a0a" },
        {"webworker01_NA", "03bfc36a60194b495c075b89995f307bec68c1bcbe381b6b29db47af23494430f9" },
        {"pbca26_NA", "038319dcf74916486dbd506ac866d184c17c3202105df68c8335a1a1079ef0dfcc" },
        {"indenodes_SH", "031d1584cf0eb4a2d314465e49e2677226b1615c3718013b8d6b4854c15676a58c" },
        {"pirate_NA", "034899e6e884b3cb1f491d296673ab22a6590d9f62020bea83d721f5c68b9d7aa7" },
        {"lukechilds_AR", "031ee242e67a8166e489c0c4ed1e5f7fa32dff19b4c1749de35f8da18befa20811" },
        {"dragonhound_NA", "022405dbc2ea320131e9f0c4115442c797bf0f2677860d46679ac4522300ce8c0a" },
        {"fullmoon_AR", "03cd152ae20adcc389e77acad25953fc2371961631b35dc92cf5c96c7729c2e8d9" },
        {"chainzilla_SH", "03fe36ff13cb224217898682ce8b87ba6e3cdd4a98941bb7060c04508b57a6b014" },
        {"titomane_EU", "03d691cd0914a711f651082e2b7b27bee778c1309a38840e40a6cf650682d17bb5" },
        {"jeezy_EU", "022bca828b572cb2b3daff713ed2eb0bbc7378df20f799191eebecf3ef319509cd" },
        {"titomane_SH", "038c2a64f7647633c0e74eec93f9a668d4bf80214a43ed7cd08e4e30d3f2f7acfb" },
        {"alien_AR", "024f20c096b085308e21893383f44b4faf1cdedea9ad53cc7d7e7fbfa0c30c1e71" },
        {"pirate_EU", "0371f348b4ac848cdfb732758f59b9fdd64285e7adf769198771e8e203638db7e6" },
        {"thegaltmines_NA", "03e1d4cec2be4c11e368ff0c11e80cd1b09da8026db971b643daee100056b110fa" },
       {"computergenie_NA", "02f945d87b7cd6e9f2173a110399d36b369edb1f10bdf5a4ba6fd4923e2986e137" },
        {"nutellalicka_SH", "035ec5b9e88734e5bd0f3bd6533e52f917d51a0e31f83b2297aabb75f9798d01ef" },
        {"chainstrike_SH", "0221f9dee04b7da1f3833c6ea7f7325652c951b1c239052b0dadb57209084ca6a8" },
        {"hunter_SH", "02407db70ad30ce4dfaee8b4ae35fae88390cad2b0ba0373fdd6231967537ccfdf" },
        {"alien_EU", "022b85908191788f409506ebcf96a892f3274f352864c3ed566c5a16de63953236" },
        {"gt_AR", "0307c1cf89bd8ed4db1b09a0a98cf5f746fc77df3803ecc8611cf9455ec0ce6960" },
       {"patchkez_SH", "03d7c187689bf829ca076a30bbf36d2e67bb74e16a3290d8a55df21d6cb15c80c1" },
      {"decker_AR", "02a85540db8d41c7e60bf0d33d1364b4151cad883dd032878ea4c037f67b769635" }
     }
 };
