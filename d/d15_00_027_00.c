MsgDisp ( "","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・" ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,0 ) ;
ChMotion ( 2,0 ) ;
VoicePlay ( "D150002700_02_000" ) ;
MsgDisp ( "Sassa","Come to think of it. I don't think I've
ever seen any teachers in the cafeteria
aside from Mikage-sensei?" ) ;
MsgDisp ( "主人公","Now that you say it......" ) ;
ChEye ( 7,0 ) ;
ChMouth ( 7,4 ) ;
ChMotion ( 7,4 ) ;
VoicePlay ( "D150002700_07_000" ) ;
MsgDisp ( "Mikage","Hm? That can't be... ......Wait, you're
right. No one else is here." ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,0 ) ;
ChMotion ( 2,4 ) ;
VoicePlay ( "D150002700_02_010" ) ;
MsgDisp ( "Sassa","Mikage-sensei, what's up?" ) ;
ChEye ( 7,2 ) ;
ChMouth ( 7,2 ) ;
ChMotion ( 7,0 ) ;
VoicePlay ( "D150002700_07_010" ) ;
MsgDisp ( "Mikage","You know, I don't think that's the case
but maybe teachers aren't allowed to use
this place?" ) ;
ChEye ( 2,0 ) ;
ChMouth ( 2,5 ) ;
ChMotion ( 2,0 ) ;
VoicePlay ( "D150002700_02_020" ) ;
MsgDisp ( "Sassa","Oh, Vice Principal Himuro is over there." ) ;
ChEye ( 7,5 ) ;
ChMouth ( 7,1 ) ;
ChMotion ( 7,5 ) ;
VoicePlay ( "D150002700_07_020" ) ;
MsgDisp ( "Mikage","W-What!" ) ;
SEPlay ( "EV_SE_594",0,0,0,8 ) ;
ChClose ( 7,0,10 ) ;
MsgDisp ( "主人公","Ehh......" ) ;
ChEye ( 2,2 ) ;
ChMouth ( 2,4 ) ;
ChMotion ( 2,3 ) ;
VoicePlay ( "D150002700_02_030" ) ;
MsgDisp ( "Sassa","Mikage-sensei, why are you hiding?" ) ;
VoicePlay ( "D150002700_07_030" ) ;
MsgDisp ( "Mikage","Please pretend I'm not here." ) ;
ChEye ( 2,2 ) ;
ChMouth ( 2,4 ) ;
ChMotion ( 2,4 ) ;
VoicePlay ( "D150002700_02_040" ) ;
MsgDisp ( "Sassa","It's fine though. Vice Principal Himuro is
also using the cafeteria." ) ;
SEPlay ( "EV_SE_594",0,0,0,8 ) ;
SEWait (  ) ;
ChOpen ( 7,254,0,2,0, - 1, - 1,0,3 ) ;
VoicePlay ( "D150002700_07_040" ) ;
MsgDisp ( "Mikage","What the...
Don't scare me like that." ) ;
MsgDisp ( "主人公","(Hehe. ｛御影＊＊｝ hid so quickly.)" ) ;
BGMStop (  ) ;
MsgClose (  ) ;
ScrFadeOut ( 0,0 ) ;
ChClose ( 2,0,0 ) ;
ChClose ( 7,0,0 ) ;
