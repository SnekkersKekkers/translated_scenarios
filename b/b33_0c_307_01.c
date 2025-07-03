ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr200",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
SEPlay("EV_SE_825",0,0.8);
ScrFadeIn(0);
Wait(30,0);
MsgDisp("主人公","Eh... what's up?");
MsgClose();
ChOpen(7,255,1,0,0,-1,-1,0,3,0,30);
ChOpen(5,255,0,0,2,-1,-1,0,3,0,30);
ChOpen(6,255,0,0,0,-1,-1,0,3,0,30);
VoicePlay("B330C30701_07_000");
MsgDisp("Mikage","It's feeding time at monkey mountain.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("B330C30701_06_000");
MsgDisp("Himuro","There's an ominous atmosphere...");
ChEye(5,4);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("B330C30701_05_000");
MsgDisp("Hiiragi","Yes, that was a murderous cry.");
SEStop("EV_SE_825",3);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B330C30701_07_010");
MsgDisp("Mikage","Shall we go?");
MsgDisp("主人公","...Sure.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ScrFadeIn(0);
VoicePlay("B330C30701_06_010");
MsgDisp("Himuro","The boss monkey is nasty.");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B330C30701_05_010");
MsgDisp("Hiiragi","It steals food from 
the other monkeys.");
MsgDisp("主人公","Yeah.
It's bit and strong, so
everyone is scared of it.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C30701_07_020");
MsgDisp("Mikage","But it has a role to play, you know.
It breaks up fights over food, 
and it'll even defend the group 
if there's trouble with another troop.");
ChEye(5,0);
ChMotion(5,4);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C30701_06_020");
MsgDisp("Himuro","It looked like it was 
the one picking fights?");
ChEye(5,4);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B330C30701_05_020");
MsgDisp("Hiiragi","And there's no rival groups here either.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C30701_07_030");
MsgDisp("Mikage","Well, that's true.
The purpose of the zoo's boss monkey...
It might also be interesting
to investigate that?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C30701_07_040");
MsgDisp("Mikage","Our next field lesson will be at 
the zoo, observing the monkey mountain.");
MsgDisp("主人公","(Hehe.
I'm looking forward to ｛御影＊＊｝ 's
next field lesson.')");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,7);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,-1);
ChMouthOpenLevel(6,-1);
ChCheek(6,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,7);
ChEyeOpenLevel(7,-1);
ChMouthOpenLevel(7,-1);
ChCheek(7,0);
