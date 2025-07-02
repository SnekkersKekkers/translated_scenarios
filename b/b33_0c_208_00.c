ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr500",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr520",0);
ChLayout(2);
ChOpen(6,255,0,0,0,-1,-1,0,3,0,30);
ChOpen(5,255,0,0,4,-1,-1,0,3,0,30);
ChOpen(7,255,3,0,0,-1,-1,0,3,0,30);
ScrFadeIn(0);
VoicePlay("B330C20800_07_000");
MsgDisp("Mikage","The best part of camping is enjoying 
the inconvenience, right?
Let's split up and get to work!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330C20800_06_000");
MsgDisp("Himuro","I'll start with the tent.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("B330C20800_07_010");
MsgDisp("Mikage","｛主人公｝, I brought some vegetables too
Please prepare them.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("主人公","Yes.
These are vegetables 
you grew, right,｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20800_07_020");
MsgDisp("Mikage","Yeah, they're real beauties.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20800_07_030");
MsgDisp("Mikage","Yanosuke, would you like to 
start the fire together?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C20800_05_000");
MsgDisp("Hiiragi","Absoulutely. You do it by 
rubbing some wood together right?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20800_07_040");
MsgDisp("Mikage","That's right--. Would you like to try it?
We have some fire starter as a
last resort, so it's alright.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(5,0,0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
SEPlay("EV_SE_824",0,0.6);
ScrFadeIn(0);
Wait(30,0);
VoicePlay("B330C20800_06_010");
MsgDisp("Himuro","Yanosuke-senpai, a little more!");
MsgDisp("主人公","Waa, amazing...!");
SEStop("EV_SE_824");
VoicePlay("B330C20800_05_010");
MsgDisp("Hiiragi","Smoke!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B330C20800_07_050");
MsgDisp("Mikage","Yay!
This is the true joy of camping.");
MsgDisp("主人公","(Hehe, everyone seems to be having fun!
Camping with four people is this much
fun!)");
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
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
ChOpen(5,253,7,0,0,-1,-1,0,3,0,0);
