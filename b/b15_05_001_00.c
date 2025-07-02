BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(5,255,1,4,2,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B150500100_05_000");
MsgDisp("Hiiragi","That's unfair.
I've been treated like the cat at 
the theatre troupe again.");
MsgDisp("主人公","Ah, did you dislike it?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("B150500100_05_010");
MsgDisp("Hiiragi","I wonder?
But even that gentle cat had moments 
of being irritable right?");
MsgDisp("主人公","I'm sorry...");
ChEyeOpenLevel(5,0);
VoicePlay("B150500100_05_020");
MsgDisp("Hiiragi","Well now, I wonder 
what I should do...");
MsgDisp("主人公","Ugh...");
ChEye(5,3);
ChMouth(5,4);
VoicePlay("B150500100_05_030");
MsgDisp("Hiiragi","Heheh, haha.");
MsgDisp("主人公","...Ah, could it be that you 
were pretending to be angry, 
｛柊＊＊＊｝?");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B150500100_05_040");
MsgDisp("Hiiragi","Yes.
A counterattack of this level
is alright, right?");
MsgDisp("主人公","Haa... that surprised me.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B150500100_05_050");
MsgDisp("Hiiragi","In other words, you have a little
bit of a guilty conscence right?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B150500100_05_060");
MsgDisp("Hiiragi","Then, please reflect a little.
I'll see you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(Haa, my heart might
be racing a little...)");
MsgClose();
ScrFadeOut(0,0);
