BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...Phew, I had a big lunch. I think I'll
spend the rest of my break on the
rooftop.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_011",0,1);
SEWait();
VoicePlay("D010300200_03_000");
MsgDisp("Honda?","Yaaay!");
MsgDisp("主人公","(∋
That voice, is that maybe...)");
SEPlay("EV_SE_616",0.2,0.6);
Wait(16,0);
BGOpen("sc231",0);
StlOpen("ev_03_10");
EfctOpen(6);
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,0);
BGMPlay("BGM_C03_HONDA_B",0.01);
ScrFadeIn(0);
Wait(20,0);
MsgDisp("主人公","Like I thought, it's ｛本多＊＊｝.
What are you doing?");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300200_03_010");
MsgDisp("Honda","Ah, sorry!
I only shouted because I thought no one
else was here.");
StlEye(3,1);
StlMouth(3,0);
StlEyeOpenLevel(3,5);
VoicePlay("D010300200_03_020");
MsgDisp("Honda","Actually...
My little sister just got accepted into
her first choice junior high school!");
MsgDisp("主人公","Wow, that's awesome!
Congrats!");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300200_03_030");
MsgDisp("Honda","She worked hard, staying up late every
night.");
MsgDisp("主人公","With you as a brother, it must be
comforting for her to know that you can
teach her anything.");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300200_03_040");
MsgDisp("Honda","I'm happy to hear you say that, but that's
actually not true.");
MsgClose();
SEPlay("EV_SE_617",0.3,0.4,0.8);
ScrFadeOut(0);
SEWait();
StlClose();
EfctClose();
BGMVol(0.5,2);
SEPlay("EV_SE_063",0,0.6);
SEWait();
MsgClose();
ChOpen(3,254,0,4,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010300200_03_050");
MsgDisp("Honda","She always says...\"
Thank you for the unnecessary
explanation...\"");
MsgDisp("主人公","Hehe!");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D010300200_03_060");
MsgDisp("Honda","Ahh, don't laugh～
That hurts.");
MsgDisp("主人公","Sorry.
But I think your sister is just being shy.
She actually relies on you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D010300200_03_070");
MsgDisp("Honda","I see, you think so?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300200_03_080");
MsgDisp("Honda","I also bought her a gift to celebrate.
I left it on her bed, so I wonder if she
noticed it yet?");
MsgDisp("主人公","A surprise, huh?
What did you get her?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D010300200_03_090");
MsgDisp("Honda","A stuffed animal.
A super realistic Giant Isopod plushie∈");
SEPlay("EV_SE_SCHOOL_002");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
Wait(30,0);
VoicePlay("D010300200_03_100");
MsgDisp("Honda","Ah, lunch is almost over∋
I need to go buy something to eat.
Cya～!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(He left a super realistic giant isopod
plushie on his sister's bed Will she be
okay...?)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
