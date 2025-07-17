BGOpen("fp400",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yay, I made it here on time.)");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("D010700600_07_000");
MsgDisp("Mikage","｛主人公｝, you're the
best.");
MsgDisp("主人公","Eh?
Isn't this the right time...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D010700600_07_010");
MsgDisp("Mikage","There were a lot of sudden cancellations.
I guess everyone had better things to do.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700600_07_020");
MsgDisp("Mikage","Did you not have something better to do
today?");
MsgDisp("主人公","Nothing in particular. But you know, isn't
it fun to hang out with your friends and
teachers on off days?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D010700600_07_030");
MsgDisp("Mikage","Ahh, I get that. It's something new and
different from school. ...Should we
wait a bit longer?");
MsgClose();
ChClose(7);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(7,254,0,2,0,#1,#1,0,0);
VoicePlay("D010700600_07_040");
MsgDisp("Mikage","Nobody is coming. Even if the two of us
call it an extracurricular lesson...
Yeah, I guess we should cancel today?");
MsgDisp("主人公","Ah, okay...
I guess so.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D010700600_07_050");
MsgDisp("Mikage","Should we forget the extracurricular class
and just have some fun?");
MsgDisp("主人公","Yes!
This way you don't have any extra
paperwork to do.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700600_07_060");
MsgDisp("Mikage","Oy!
You're right!
So... what about bowling?");
MsgDisp("主人公","Eh?");
BGMStop();
MsgClose();
ScrFadeOut(0);
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
MsgDisp("主人公","Hey ｛御影＊＊｝, do you
like bowling?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
VoicePlay("D010700600_07_070");
MsgDisp("Mikage","Keep this a secret, okay?
It's actually my first time.");
MsgDisp("主人公","Ehh∋");
MsgClose();
ScrFadeOut(0);
ChClose(7);
StlOpen("ev_07_07");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
VoicePlay("D010700600_07_080");
MsgDisp("Mikage","How do I look?
You can't tell it's my first time, right?");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("D010700600_07_090");
MsgDisp("Mikage","Alright.
Time for the throw.");
MsgDisp("主人公","N-No, you can't do it there.
Throw it this way!");
StlEyeOpenLevel(7,5);
VoicePlay("D010700600_07_100");
MsgDisp("Mikage","I at least know that much.");
BGMStop(2.5);
MsgClose();
ScrFadeOut(0);
StlClose();
SEPlay("EV_SE_514");
SEWait();
Wait(10,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne000",0);
MsgClose();
ChOpen(7,254,1,2,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010700600_07_110");
MsgDisp("Mikage","A complete defeat～");
MsgDisp("主人公","｛御影＊＊｝, is it really
your first time bowling?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D010700600_07_120");
MsgDisp("Mikage","Don't tell anyone.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700600_07_130");
MsgDisp("Mikage","It's not only bowling.
Your sensei can't even do some things you
students take for granted.");
MsgDisp("主人公","Eh?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("D010700600_07_140");
MsgDisp("Mikage","I went to high school overseas. Because I
skipped a grade, I was younger than my
classmates and didn't have any friends.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("D010700600_07_150");
MsgDisp("Mikage","That's why, now, I'm just piggybacking on
everyone else's high school life.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D010700600_07_160");
MsgDisp("Mikage","Today was awesome, huh?");
MsgDisp("主人公","...｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("D010700600_07_170");
MsgDisp("Mikage","Cya later then.
Next time when nobody shows up, we can
play some more～");
MsgDisp("主人公","Y-Yes!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(Today I learned something amazing...)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
