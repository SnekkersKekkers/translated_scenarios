BGOpen("sc520",1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛風真＊＊｝...
I want to go up to the rooftop.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30,0);
VoicePlay("D010100300_01_000");
MsgDisp("Kazama","Yeah.
Everything is fine.");
MsgDisp("主人公","(...is he talking to someone?)");
MsgClose();
StlOpen("ev_01_10");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_C",0.01);
ScrFadeIn(0);
Wait(40,0);
VoicePlay("D010100300_01_010");
MsgDisp("Kazama","I'm making the most of my time here.
So don't worry.");
VoicePlay("D010100300_01_020");
MsgDisp("Kazama","I learn a lot at Grandpa's store, things I
can't experience elsewhere.");
StlMouth(1,1);
VoicePlay("D010100300_01_030");
MsgDisp("Kazama","No, I'm not like dad...
I don't think I'll ever be like him.");
MsgDisp("主人公","(I don't want to eavesdrop but...
I wonder who ｛風真＊＊｝ is talking to.)");
SEPlay("EV_SE_602");
BGMVol(0.5,2);
MsgDisp("主人公","Ah...");
MsgClose();
ScrFadeOut(0,0);
StlClose();
VoicePlay("D010100300_01_040");
MsgDisp("Kazama","Who's there?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc231",1);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010100300_01_041");
MsgDisp("Kazama","Are you following me?
You always appear out of nowhere.");
MsgDisp("主人公","Sorry.
I saw you and I just...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D010100300_01_050");
MsgDisp("Kazama","So you ARE following me.");
MsgDisp("主人公","Geez.
｛風真＊＊｝, are you okay?
That seemed like a serious phone call...?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100300_01_060");
MsgDisp("Kazama","∈");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D010100300_01_070");
MsgDisp("Kazama","You're such a good detective on the
lookout like that.
I didn't do anything wrong, okay?");
MsgDisp("主人公","It's not like that!");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("D010100300_01_080");
MsgDisp("Kazama","Don't worry about it.
I just missed my parents a bit.
Does that make me sound uncool?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
MsgDisp("主人公","(｛風真＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);
