ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
BGOpen("tr200",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChNanaType(0);
ChOpen(4,253,0,0,0,#1,#1,0,3);
ChOpen(1,253,0,0,0,#1,#1,0,3);
ChOpen(3,253,0,0,0,#1,#1,0,3);
ScrFadeIn(0);
VoicePlay("B330B30701_04_000");
MsgDisp("Nanatsumori","Mugs and towels are classics
And jigsaw puzzles.");
MsgDisp("主人公","Hey, there are some animal models.
Do you assemble them yourself?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330B30701_01_000");
MsgDisp("Kazama","Definitely seems like 
something Honda would like.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B30701_03_000");
MsgDisp("Honda","Yep yep, I have lots of them. 
The rhinocerous model is super cool!");
ChEye(4,0);
ChMouth(4,3);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B330B30701_01_010");
MsgDisp("Kazama","I kind of get it.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30701_04_010");
MsgDisp("Nanatsumori","A rhino huh.
It's kind of like a dinosaur, 
and the movable parts look interesting. ");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B330B30701_03_010");
MsgDisp("Honda","Ah, you get it?
I'm happyー!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B30701_04_020");
MsgDisp("Nanatsumori","But if I were to 
buy one... I would get this.");
ChMouth(1,2);
MsgDisp("主人公","That's a... shoebill?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30701_04_030");
MsgDisp("Nanatsumori","Right.
Isn't it really cute?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330B30701_01_020");
MsgDisp("Kazama","So that's what
Nanatsumori finds cute.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30701_04_040");
MsgDisp("Nanatsumori","It's not about the model, 
The way this guy lives 
is full of charm.");
ChEyeOpenLevel(1,#1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B30701_03_020");
MsgDisp("Honda","Right right!
This thing hardly moves.
So—");
ChEye(1,2);
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("B330B30701_04_050");
MsgDisp("Nanatsumori","...I've done it.
I turned on Dahon's switch.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330B30701_01_030");
MsgDisp("Kazama","Once he starts, he won't stop
until he goes all the way.
Give up.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30701_04_060");
MsgDisp("Nanatsumori","Yeah, sorry.
I'll buy the shoebill
once I'm done listening.");
MsgDisp("主人公","(Hehe.
Seems like ｛七ツ森＊｝ really 
likes the shoebill model!)");
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
