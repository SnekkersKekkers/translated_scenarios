BGOpen("sc510",1);
ChLayout(1);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
Wait(60,0);
VoiceEVSPlay(1);
VoicePlay("D010100900_01_000");
MsgDisp("Kazama?","｛主人公｝.");
SEStop("EV_SE_SCHOOL_002",2.5);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","｛風真＊＊｝, what's up?");
VoicePlay("D010100900_01_010");
MsgDisp("Kazama","Are you going home now?
If so, let's go together.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
BGOpen("sc010",1);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ScrFadeIn(0);
VoicePlay("D010100900_01_020");
MsgDisp("Kazama","......Hey, can I ask you something?");
MsgDisp("主人公","Sure, what is it?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100900_01_030");
MsgDisp("Kazama","While I was gone, did you hear that
bell?");
MsgDisp("主人公","......The bell, do you mean that church
bell that ｛風真＊＊｝ used to hear? It's
weird but I haven't heard it since then.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D010100900_01_040");
MsgDisp("Kazama","I see......I was in England so I couldn't
hear it, but you didn't either, huh......");
ChEye(1,4);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","……?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D010100900_01_050");
MsgDisp("Kazama","Alright, let's give it a try.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","Eh?
Wait up, ｛風真＊＊｝!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_01_15");
StlEye(1,0);
StlMouth(1,0);
EfctOpen(14);
BGMPlay("BGM_C01_RYOUTA_C",0.01);
ScrFadeIn(0);
VoicePlay("D010100900_01_060");
MsgDisp("Kazama","The two of us walking home from
school together......Shouldn't it be fine
since those conditions were met?");
StlEye(1,1);
VoicePlay("D010100900_01_070");
MsgDisp("Kazama","Here, let's listen carefully.");
StlEye(1,0);
StlEyeOpenLevel(1,0,1);
MsgDisp("主人公","Ah, okay......");
StlMouth(1,1);
StlMouthOpenLevel(1,0);
VoicePlay("D010100900_01_080");
MsgDisp("Kazama","…………");
MsgDisp("主人公","(｛風真＊＊｝ is really focusing.
Okay, I will too......!)");
MsgClose();
ScrFadeOut(3,30);
EfctClose();
StlClose();
Wait(40,0);
VoicePlay("D010100900_01_090");
MsgDisp("Kazama","......Ha.
Your eyebrows are intense.");
MsgDisp("主人公","Eh∋");
Wait(40,0);
BGOpen("sc010",1);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,2,3,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","......I didn't hear it.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100900_01_100");
MsgDisp("Kazama","All that means is that we can't 
overwrite our wishes. There's no
uncertainty left.");
MsgDisp("主人公","Yeah?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D010100900_01_110");
MsgDisp("Kazama","......Nope, I can't let my guard down
just yet. Who knows when you'll just
fall into another puddle again.");
MsgDisp("主人公","Geez, I'm fine now!
It would be too embarrassing to have
you carry me on your back again......");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("D010100900_01_120");
MsgDisp("Kazama","I can carry you in my arms, on my back,
even on my shoulders would be fine with
me, though?");
MsgDisp("主人公","(......I need to watch my step when I'm
with ｛風真＊＊｝.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);
