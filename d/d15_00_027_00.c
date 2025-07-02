MsgDisp ( "","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・" ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,0 ) ;
ChMotion ( 2,0 ) ;
VoicePlay ( "D150002700_02_000" ) ;
MsgDisp ( "颯砂","そういえば、
学食で御影先生以外の先生って、
見たことなくない？" ) ;
MsgDisp ( "主人公","そういえば……" ) ;
ChEye ( 7,0 ) ;
ChMouth ( 7,4 ) ;
ChMotion ( 7,4 ) ;
VoicePlay ( "D150002700_07_000" ) ;
MsgDisp ( "御影","ん？
そ、そんなこと……
……ほんとだ、誰もいない。" ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,0 ) ;
ChMotion ( 2,4 ) ;
VoicePlay ( "D150002700_02_010" ) ;
MsgDisp ( "颯砂","御影先生、どうしたんですか？" ) ;
ChEye ( 7,2 ) ;
ChMouth ( 7,2 ) ;
ChMotion ( 7,0 ) ;
VoicePlay ( "D150002700_07_010" ) ;
MsgDisp ( "御影","いやさ、まさかとは思うけど、
教師は利用禁止――" ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,5 ) ;
ChMotion ( 2,0 ) ;
VoicePlay ( "D150002700_02_020" ) ;
MsgDisp ( "颯砂","あ、あそこに氷室教頭。" ) ;
ChEye ( 7,5 ) ;
ChMouth ( 7,1 ) ;
ChMotion ( 7,5 ) ;
VoicePlay ( "D150002700_07_020" ) ;
MsgDisp ( "御影","な、なにっ！" ) ;
SEPlay ( "EV_SE_594",0,0,0,8 ) ;
ChClose ( 7,0,10 ) ;
MsgDisp ( "主人公","えっ……" ) ;
ChEye ( 2,2 ) ;
ChMouth ( 2,4 ) ;
ChMotion ( 2,3 ) ;
VoicePlay ( "D150002700_02_030" ) ;
MsgDisp ( "颯砂","御影先生、
何隠れてるんですか？" ) ;
VoicePlay ( "D150002700_07_030" ) ;
MsgDisp ( "御影","俺はいなかった感じで頼む。" ) ;
ChEye ( 2,2 ) ;
ChMouth ( 2,4 ) ;
ChMotion ( 2,4 ) ;
VoicePlay ( "D150002700_02_040" ) ;
MsgDisp ( "颯砂","大丈夫ですって。
氷室先生も学食利用されてるみたいです。" ) ;
SEPlay ( "EV_SE_594",0,0,0,8 ) ;
SEWait (  ) ;
ChOpen ( 7,254,0,2,0, - 1, - 1,0,3 ) ;
VoicePlay ( "D150002700_07_040" ) ;
MsgDisp ( "御影","なんだよ。
ビビらせるなってぇ。" ) ;
MsgDisp ( "主人公","（ふふっ、｛御影＊＊｝、
隠れるのすごく速かった）" ) ;
BGMStop (  ) ;
MsgClose (  ) ;
ScrFadeOut ( 0,0 ) ;
ChClose ( 2,0,0 ) ;
ChClose ( 7,0,0 ) ;
