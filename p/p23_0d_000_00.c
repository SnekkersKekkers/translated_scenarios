BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The curtain is about to rise...)");
VoicePlay("P230D00000_21_000");
MsgDisp("Michiru?","Are you nervous?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,38,0,0,0,-1,-1,0,1);
ChOpen(22,38,0,0,0,-1,-1,0,2);
MsgDisp("主人公","｛みちる＊｝,｛ひかる＊｝.
When I think about the fact I can't fail,
my heart begins to thud...");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P230D00000_22_000");
MsgDisp("Hikaru","Non non♪
\"Flora angel\" is invincible, right?");
MsgDisp("主人公","Ah...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P230D00000_21_010");
MsgDisp("Michiru","It's as purple says.
Right, white?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P230D00000_22_010");
MsgDisp("Hikaru","Yeah, yeah. Pink♪
White, you're the leader. Right?");
MsgDisp("主人公","Yeah...I'll do my best!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P230D00000_22_020");
MsgDisp("Hikaru","That's the spirit! If you can show off
cutely, it'll already be a huge success▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("P230D00000_21_020");
MsgDisp("Michiru","Come on, be brave, White!");
VoicePlay("P230D00000_47_000");
MsgDisp("Broadcast","We will now begin Habataki High School's
play.");
SEPlay("EV_SE_038");
SEWait();
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("P230D00000_22_030");
MsgDisp("Hikaru","Then, let's go～!");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P230D00000_21_030");
MsgDisp("Michiru","Let's enjoy ourselves fully, yeah?");
MsgDisp("主人公","Yeah!");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
