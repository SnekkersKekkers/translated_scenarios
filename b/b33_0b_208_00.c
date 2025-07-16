ChClose(3,0,0);
ChClose(1,0,0);
ChClose(4,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(3,255,0,0,3,#1,#1,0,3);
ChOpen(1,255,0,0,0,#1,#1,0,3);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,3);
ScrFadeIn(1);
VoicePlay("B330B20800_03_000");
MsgDisp("Honda","Alright, we're here. If we're talking
amusement park attractions, we can't miss
out on this one!");
ChMouth(1,3);
MsgDisp("主人公","Ehhh...");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B20800_04_000");
MsgDisp("Nanatsumori","Dahon-sensei.
There's someone who looks unhappy.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoiceEVSPlay(1);
VoicePlay("B330B20800_01_000");
MsgDisp("Kazama","｛主人公｝, I'm expecting
a good reason for this.");
MsgDisp("主人公","Hey, everyone's already having fun right?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B20800_04_010");
MsgDisp("Nanatsumori","Then, what should we do?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
ChEye(1,3);
ChMouth(1,1);
VoiceEVSPlay(3);
VoicePlay("B330B20800_03_010");
MsgDisp("Honda","｛主人公｝, don't be
scared.
You can hold my hand.");
ChEye(4,2);
ChMouth(4,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330B20800_01_010");
MsgDisp("Kazama","Oi.");
ChMotion(4,0,1);
VoicePlay("B330B20800_04_020");
MsgDisp("Nanatsumori","He said it with no hesitation...");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B330B20800_03_020");
MsgDisp("Honda","When I went to a haunted house with my
little sister, it was fine when I did
that. But we were in elementary school.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
VoicePlay("B330B20800_03_030");
VoiceEVSPlay(3);
MsgDisp("Honda","Alright, give me your hand.
｛主人公｝.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B330B20800_01_020");
MsgDisp("Kazama","Wait.
Then we should all do that.");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("B330B20800_04_030");
MsgDisp("Nanatsumori","Oi.
Someone's going to be left out, isn't that
sad?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B330B20800_03_040");
MsgDisp("Honda","Sad?
It's alright, once we go in, all those
feelings will be gone in a flash!");
MsgDisp("主人公","(Even if you hold my hand, I don't think
it changes the fact that this is scary...)");
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
