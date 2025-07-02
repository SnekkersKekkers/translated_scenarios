MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf100",1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
MsgClose();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B360201000_46_000");
MsgDisp("Clerk","We're currently having
some limited-time sales.
These are some great dealsー!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B360201000_02_000");
MsgDisp("Sassa","Yeah, nice.");
MsgDisp("主人公","Eh...?
I didn't say anything?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("B360201000_02_010");
MsgDisp("Sassa","Haha.
Well, it's written on your 
face that you want to go.");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("wf820",0);
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ScrFadeIn(0);
MsgClose();
ChOpen(2,255,4,0,2,-1,-1,0,0);
VoicePlay("B360201000_02_020");
MsgDisp("Sassa","A j-jewelry store? 
Won't I be too out-of-place?");
VoicePlay("B360201000_46_010");
MsgDisp("Clerk","Welcome～!
We have some new engagement 
rings in stock.");
MsgDisp("主人公","Wow, they're beautiful.
How wonderful...");
VoicePlay("B360201000_46_020");
MsgDisp("Clerk","If you reserve it now, it'll be 
in time for a ceremony within
the next three months?");
MsgDisp("主人公","Eh∋");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B360201000_02_030");
MsgDisp("Sassa","C-ceremony?");
VoicePlay("B360201000_46_030");
MsgDisp("Clerk","When were you planning it for?");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B360201000_02_040");
MsgDisp("Sassa","Um, w-we're not...
there yet.");
MsgDisp("主人公","(...Hm?\"yet?\")");
VoicePlay("B360201000_46_040");
ChEye(2,0);
MsgDisp("Clerk","So that's how it is. 
Please take your time 
looking around.");
MsgDisp("主人公","Phew... 
that was surprising wasn't it?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B360201000_02_050");
MsgDisp("Sassa","...Yeah.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(But just now, ｛颯砂＊＊｝
said \"yet\" right?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
