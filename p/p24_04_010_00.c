BGMStop();
BGOpen("sc740",0);
BGMPlay("BGM_ENGEKI_D",0.01);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("P240401000_45_000");
MsgDisp("Bell","I...
I love you. I love you...!
Please...");
VoicePlay("P240401000_39_010");
MsgDisp("Beast","Oh... oh!
I'm returning to my original form!");
VoicePlay("P240401000_39_020");
MsgDisp("Beast","Thank you.
It's thanks to you!");
VoicePlay("P240401000_45_010");
MsgDisp("Bell","Ah, you!
I love you with all my heart!");
MsgClose();
BGMStop(2);
SEPlay("EV_SE_GAYA_021");
Wait(150,0);
ChNanaType(0);
ChOpen(4,30,0,0,2,8,-1,0,0,0,60);
SEStop("EV_SE_GAYA_021",3);
ChMotion(4,2,1);
VoicePlay("P240401000_04_000");
MsgDisp("Nanatsumori","What a weird story.");
MsgDisp("主人公","Eh, why?");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("P240401000_04_010");
MsgDisp("Nanatsumori","Because in the last scene, 
the visuals of the guy she liked until now
completely changes, you know?");
ChEye(4,1);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("P240401000_04_020");
MsgDisp("Nanatsumori","No matter how much you connect with him,
how can you accept him so quickly 
and easily...");
MsgDisp("主人公","Hmmm...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("P240401000_04_030");
MsgDisp("Nanatsumori","You don't seem to mind 
that I have several sides of me, though.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("P240401000_04_040");
MsgDisp("Nanatsumori","...What about your true feelings?");
MsgDisp("主人公","True feelings?
I...");
MsgDisp("主人公","｛七ツ森＊｝ is ｛七ツ森＊｝. Even if your
appearance is different, it doesn't make
any difference to me...I guess?");
ChEye(4,3);
ChMouthOpenLevel(4,0);
ChCheek(4,7);
VoicePlay("P240401000_04_050");
MsgDisp("Nanatsumori","…………");
ChEye(4,3);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("P240401000_04_060");
MsgDisp("Nanatsumori","You really are a strange person.
Asking you was pointless.");
MsgDisp("主人公","(Why are you sulking...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
