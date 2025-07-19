BGOpen("wf000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright...
Maybe I should get home now?)");
VoiceEVSPlay(3);
VoicePlay("E010310100_03_000");
MsgDisp("Honda?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("E010310100_03_010");
MsgDisp("Honda","It's like I've been waiting for you.");
MsgDisp("主人公","That's true, what a coincidence.
Are you waiting for someone, ｛本多＊＊｝?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("E010310100_03_020");
MsgDisp("Honda","Yeah, my little sister.
Her cram school lesson's over.
I've been asked to come get her.");
MsgDisp("主人公","I see.
｛本多＊＊｝, you don't go to cram school?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("E010310100_03_030");
MsgDisp("Honda","Nah, I've been there before though.
I was told I was being a bother to other
students, so they got me to stop coming.");
MsgDisp("主人公","Whattt?
What did you do?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("E010310100_03_040");
MsgDisp("Honda","They said I was digressing too much, so
the lessons couldn't progress!
That was not my goal though.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("E010310100_03_050");
MsgDisp("Honda","At school, the teachers are quite willing
to digress with me.
But cram school is different.");
MsgDisp("主人公","I see.
Hehe, I can imagine that!");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("E010310100_03_060");
MsgDisp("Honda","Ah, you're laughing.
It's fine, I'm just not made for cram.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("E010310100_03_070");
MsgDisp("Honda","Ah, it's time already.
I gotta go.
Take care on your way home.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Huh, I can imagine how cram school's not
made for ｛本多＊＊｝...)");
MsgClose();
ScrFadeOut(0,0);
