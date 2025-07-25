ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
BGOpen("ne200",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("ne220",0);
SEPlay("EV_SE_GAYA_003");
ScrFadeIn(0);
Wait(300,1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0,0);
BGOpen("ne210",0);
ChLayout(2);
ChNanaType(0);
ChOpen(4,253,0,4,3,#1,#1,0,3,0,30);
ChOpen(1,253,0,2,2,0,#1,0,3,0,30);
ChOpen(3,253,2,2,4,#1,#1,0,3,0,30);
ScrFadeIn(0);
VoicePlay("B330B30500_03_000");
MsgDisp("Honda","My ears are ringing...");
VoicePlay("B330B30500_01_000");
MsgDisp("Kazama","Me too...");
MsgDisp("主人公","Yeah.
It was very impressive wasn' it?");
ChMotion(1,0,1);
ChEyeOpenLevel(1,#1);
VoicePlay("B330B30500_01_010");
MsgDisp("Kazama","Was it that impressive?");
ChMotion(4,0,1);
VoicePlay("B330B30500_04_000");
MsgDisp("Nanatsumori","Ah...this is a nice feeling.
I like this reverberation.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B330B30500_03_010");
MsgDisp("Honda","Mi-kun, was there a band you liked?
It looked like you were pretty quiet
during the show.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("B330B30500_04_010");
MsgDisp("Nanatsumori","No, not in particular.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330B30500_01_020");
MsgDisp("Kazama","Weren't you the one who said you wanted to
go, Nanatsumori?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B30500_04_020");
MsgDisp("Nanatsumori","I don't know the bands, but when you hear
them live at a livehouse, don't they all
feel cool?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30500_04_030");
MsgDisp("Nanatsumori","I like that feeling.
That's why it's fun no matter when I go.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("B330B30500_03_020");
MsgDisp("Honda","Ryo-kun...
I couldn't really hear just now.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330B30500_01_030");
MsgDisp("Kazama","That's fine.
Leave it as it is.
It looks like he's intoxicated anyways.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("B330B30500_04_040");
MsgDisp("Nanatsumori","｛主人公｝, you get it right?");
MsgDisp("主人公","(That's just like ｛七ツ森＊｝.
I feel a bit bad for those two though...)");
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
