ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
BGOpen("tr300",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(2);
ChOpen(1,253,0,4,3,#1,#1,0,3);
ChOpen(3,253,0,0,0,#1,#1,0,3);
ChNanaType(0);
ChOpen(4,253,0,0,0,#1,#1,0,3);
ScrFadeIn(0);
VoicePlay("B330B10701_01_000");
MsgDisp("Kazama","The smell of old 
things is unique.");
ChMouth(4,4);
VoicePlay("B330B10701_04_000");
MsgDisp("Nanatsumori","You're talking
like an antique maniac.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330B10701_01_010");
MsgDisp("Kazama","I just like antiques.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B10701_03_000");
MsgDisp("Honda","Ryo-kun's Grandpa's Antique store also
smells like this.");
MsgDisp("主人公","Seems like you like it, ｛本多＊＊｝.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330B10701_01_020");
MsgDisp("Kazama","Come to think of it, my Grandpa said that
Honda visits there a lot.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
VoicePlay("B330B10701_03_010");
MsgDisp("Honda","Yep yep! I just happen to be heading in
that direction, and before I know it,
we're having a lively conversation!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B10701_04_010");
MsgDisp("Nanatsumori","Dahon's long conversations...
Is he bothering Kazama's grandpa?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330B10701_01_030");
MsgDisp("Kazama","Not at all.
Seems like my Grandpa enjoys it too.");
ChEyeOpenLevel(1,#1);
ChMotion(4,0,1);
MsgDisp("主人公","Haha!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B10701_03_020");
MsgDisp("Honda","We start with antiques, then the Kazama
family ancestors, and once we start
talking about Habataki City's history, we
can't stop!");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330B10701_01_040");
MsgDisp("Kazama","Thanks to that, he never runs out of
people to talk to.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("B330B10701_03_030");
MsgDisp("Honda","That's right!
Maybe next time we should bring Ryo-kun's
grandpa here?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B330B10701_01_050");
MsgDisp("Kazama","He'll definitely be happy.");
MsgDisp("主人公","(Hehe!)");
BGMStop();
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
