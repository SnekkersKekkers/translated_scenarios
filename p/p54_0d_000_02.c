BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad! It was a huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,0,0,0,#1,#1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P540D00002_22_000");
MsgDisp("Hikaru","So cool～♪");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P540D00002_21_000");
MsgDisp("Michiru","Truly.
It was as if we were completely 
in the game's world.");
MsgDisp("主人公","Really?
I'm glad!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P540D00002_22_010");
MsgDisp("Hikaru","If uncle were there, 
he would definitely 
break out in dance, huh～!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P540D00002_21_010");
MsgDisp("Michiru","Maybe he would show off
his rumored sexy dance, huh?");
MsgDisp("主人公","(Yay!
Looks like it went smoothly.
But the rumored sexy dance...?)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
