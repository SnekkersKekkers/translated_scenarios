MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
ChMotion(5,4);
VoicePlay("G020530001_05_000");
MsgDisp("Hiiragi","Some fireflies are with their companions,
and some are alone...... It's quite
varied, I suppose.");
MsgDisp("主人公","Yeah, that's right.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020530001_05_010");
MsgDisp("Hiiragi","Lately, we've been spending more time 
together as a group of four, haven't we?");
MsgDisp("主人公","｛氷室＊＊｝ and ｛御影＊＊｝?");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("G020530001_05_020");
MsgDisp("Hiiragi","Yes. I'm pleased that they take the
trouble to look out for me, especially
Inori-kun, even though he's younger.");
MsgDisp("主人公","Hehe. Despite how ｛氷室＊＊｝ appears, he
might actually enjoy looking out for
others?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020530001_05_030");
MsgDisp("Hiiragi","Yes, Inori-kun, Mikage-sensei, and you 
are all like teachers to me, guiding me 
through everything I'm not familiar with.");
ChEye(5,4);
ChMotion(5,3);
VoicePlay("G020530001_05_040");
MsgDisp("Hiiragi","Thank you, always. I can manage school
life thanks to everyone's help.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("G020530001_05_050");
MsgDisp("Hiiragi","Ah, look.
Those kind fireflies are gathering 
around the one that was alone earlier.");
ChEye(5,4);
VoicePlay("G020530001_05_060");
MsgDisp("Hiiragi","That's a relief......");
MsgDisp("主人公","(｛柊＊＊＊｝...... From now on too, I hope
you'll still be glad you came to Haba
High.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
