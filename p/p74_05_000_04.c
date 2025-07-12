MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yayー!　A huge success∈)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,3,4,#1,#1,0,0);
ChMotion(5,3);
Wait(20,1);
VoicePlay("P740500004_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.
Could you hear the excited cheers?");
MsgDisp("主人公","Hmーm
I was so immersed in the moment,
I couldn't really hear it well?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P740500004_05_010");
MsgDisp("Hiiragi","You were concentrating well.
Your expressions, walk and
turns were perfect.");
MsgDisp("主人公","Really?
Thank you, ｛柊＊＊＊｝...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P740500004_05_020");
MsgDisp("Hiiragi","Please don't cry.
You are a precious bride, 
so smile until the end.");
MsgDisp("主人公","...Yes!");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0,1);
ChCheek(5,5);
VoicePlay("P740500004_05_030");
MsgDisp("Hiiragi","You looked your best today.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P740500004_05_040");
MsgDisp("Hiiragi","To surpass this beauty, 
I'll have to see you in a wedding 
dress once more, won't I?");
MsgDisp("主人公","Eh, this year is the last time
I'll wear a wedding dress for a show?");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
ChCheek(5,0);
VoicePlay("P740500004_05_050");
MsgDisp("Hiiragi","Yes, that's right.");
MsgDisp("主人公","(｛柊＊＊＊｝...? Yeah, I'm glad I gave it
my best in the handicrafts club these last
three years...!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
