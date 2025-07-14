ChLayout(4);
BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ScrFadeIn(0);
VoicePlay("B330A30201_02_000");
MsgDisp("Sassa","Right.
Let's play with the beach ball.");
MsgDisp("主人公","Yeah, sounds good!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A30201_01_000");
MsgDisp("Kazama","I'll commend you for not suggesting we
should swim out to sea.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30201_06_000");
MsgDisp("Himuro","I would be okay with a
long swim though.");
ChEyeOpenLevel(1,#1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A30201_02_010");
MsgDisp("Sassa","We can peacefully play with a beachball
here.");
MsgClose();
SEPlay("EV_SE_561");
ChClose(2,0,30);
ChClose(1,0,30);
ChClose(6,0,30);
VoicePlay("B330A30201_01_010");
MsgDisp("Kazama","Then, let's hit whilst saying something we
like!");
SEWait();
VoicePlay("B330A30201_01_020");
MsgDisp("Kazama","Soba!");
SEPlay("EV_SE_816");
MsgDisp("","(*BOMF*)");
VoicePlay("B330A30201_02_020");
MsgDisp("Sassa","Haa∋ You suddenly made up that rule!
Errー...Udon!");
SEPlay("EV_SE_816");
MsgDisp("","(*BOMF*)");
VoicePlay("B330A30201_06_010");
MsgDisp("Himuro","Cup noodle!");
SEPlay("EV_SE_816");
MsgDisp("","(*BOMF*)");
VoicePlay("B330A30201_06_020");
MsgDisp("Himuro","Now say something you dislike.");
MsgDisp("主人公","Ehh∋ Even if you say that so suddenly...!
N-Nothing in particular!");
SEPlay("EV_SE_565",0.2,0.5);
MsgDisp("","(*Swoosh*)");
SEPlay("EV_SE_816",0,0.4);
SEPlay("EV_SE_049",0,1);
SEPlay("EV_SE_012",0,1);
ScrQuake(0);
VoicePlay("B330A30201_01_030");
VoicePlay("B330A30201_02_030");
VoicePlay("B330A30201_06_030");
MsgDisp("Everyone","Hahaha!");
MsgClose();
SEPlay("EV_SE_560");
ChCustomLayout(6,1.8,0,-0.5);
ChOpen(6,31,0,0,3,#1,#1,0,0,0,30);
ChPosition(6,3);
ChCustomLayout(1,1.8,-1.2,-0.5);
ChOpen(1,31,0,0,3,#1,#1,0,0,0,30);
ChPosition(1,3);
ChCustomLayout(2,1.8,1.2,-0.5);
ChOpen(2,31,3,0,3,#1,#1,0,0,0,30);
ChPosition(2,3);
SEWait();
MsgDisp("主人公","Hey... This is because you suddenly
changed the rules.");
VoicePlay("B330A30201_06_040");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","But you said 
\"nothing in particular.'\"");
VoicePlay("B330A30201_01_040");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
MsgDisp("Kazama","Yeah, Inori's clever play was interesting,
but your answer was also great!");
VoicePlay("B330A30201_02_040");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
MsgDisp("Sassa","Yeah, it was just
like you, and Inori.");
ChEye(1,0);
ChMotion(1,0);
VoicePlay("B330A30201_06_050");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
MsgDisp("Himuro","Then, shall we start 
from you next?");
MsgClose();
SEPlay("EV_SE_561");
ChClose(1,0,30);
ChClose(6,0,30);
ChClose(2,0,30);
MsgDisp("主人公","(Alright, 
I won't lose this time...!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(2);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
