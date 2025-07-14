BGOpen("wf221",0);
ChLayout(2);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C10101_06_000");
MsgDisp("Himuro","Both the winds and waves are calm today.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B330C10101_05_000");
MsgDisp("Hiiragi","To have everyone relaxing on the boat like
this, this time is an extravagance, isn't
it?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C10101_07_000");
MsgDisp("Mikage","What are you relaxing for?
Isn't it fine to be more excited?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330C10101_06_010");
MsgDisp("Himuro","Why is there a need to get excited?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10101_05_010");
MsgDisp("Hiiragi","Yes. Mikage-sensei, please try taking a
deep breath. It'll feel nice, yes?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C10101_07_010");
MsgDisp("Mikage","Sure.");
MsgDisp("主人公","Hehe. ｛御影＊＊｝, what are you doing?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B330C10101_07_020");
MsgDisp("Mikage","Causing a ruckus with your friends is one
of the true joys of being a high school
student isn't it?");
ChEye(5,3);
ChMouth(5,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C10101_06_020");
MsgDisp("Himuro","Ruckus? I don't really get that myself.
Right, Yanosuke-senpai?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10101_05_020");
MsgDisp("Hiiragi","Mikage-sensei, are you wanting to do some
exercise?");
ChEye(7,2);
ChMouth(7,2);
ChMotion(7,2);
ChEyeOpenLevel(7,0);
VoicePlay("B330C10101_07_030");
MsgDisp("Mikage","Haa, never mind.
They sell food for the seabirds.
That'll be fun.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgClose();
ChClose(5,0,30);
ChClose(6,0,30);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,3,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,3,0,30);
ChEye(5,4);
VoicePlay("B330C10101_05_030");
MsgDisp("Hiiragi","Mikage-sensei really likes animals doesn't
he?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C10101_06_030");
MsgDisp("Himuro","Well, he's a biology teacher after all.");
MsgDisp("主人公","(Hehe! ｛御影＊＊｝ might be the most
like a high school student?)");
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,7);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
