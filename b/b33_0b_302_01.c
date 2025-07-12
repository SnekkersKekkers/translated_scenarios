BGOpen("wf221",0);
ChLayout(2);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgDisp("主人公","There's a lot of seabirds.");
ChMotion(4,1,1);
VoicePlay("B330B30201_04_000");
MsgDisp("Nanatsumori","Yeah.
There's a bird feeding experience, 
but do you want to do it?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("B330B30201_03_000");
MsgDisp("Honda","I want to!");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B330B30201_04_010");
MsgDisp("Nanatsumori","I didn't ask Dahon though.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330B30201_01_000");
MsgDisp("Kazama","Let's do it.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B30201_04_020");
MsgDisp("Nanatsumori","Yes yes.");
MsgClose();
ScrFadeOut(0);
ChMotion(1,0,1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_729",0,0.6);
ChEye(1,0);
ChMouth(1,2);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
SEStop("EV_SE_729",3);
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B330B30201_01_010");
MsgDisp("Kazama","Ahh, it's no good again.
You're so sneaky.");
VoicePlay("B330B30201_04_030");
MsgDisp("Nanatsumori","It's not my fault.");
SEPlay("EV_SE_668",0,0.6);
SEWait();
SEPlay("EV_SE_729");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("B330B30201_03_010");
MsgDisp("Honda","Ahh!
The sea birds are only gathering 
around the food in Mii-kun's hand!");
MsgDisp("主人公","｛七ツ森＊｝ is tall so
it looks like all the birds gather in 
a place they can easily
take the food right?");
SEStop("EV_SE_729",4);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("B330B30201_01_020");
MsgDisp("Kazama","That's unfair.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("B330B30201_03_020");
MsgDisp("Honda","Should I go look for a stool?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330B30201_01_030");
MsgDisp("Kazama","Nanatsumori should just bend down.");
SEStop("EV_SE_729",2);
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30201_04_040");
MsgDisp("Nanatsumori","Not a chance.
Why don't you both try jumping up?");
MsgDisp("主人公","｛七ツ森＊｝ seems to be having fun, 
but not by feeding the seagulls...?)");
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,7);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,7);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
