ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ScrFadeIn(1,40);
SEPlay("EV_SE_817");
Wait(60,1);
ScrFadeOut(1,0,40);
ChLayout(2);
ChOpen(2,255,3,3,3,0,#1,0,3);
ChOpen(1,255,0,0,2,0,#1,0,3);
ChOpen(6,255,0,0,0,#1,#1,0,3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
VoicePlay("B330A20801_02_000");
MsgDisp("Sassa","Haa... As I thought, 
the rollercoaster here 
is really the best.");
MsgDisp("主人公","Yeah, 
it really packs a punch...");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("B330A20801_02_010");
MsgDisp("Sassa","Haha.
You were really tense.
All hunched up.");
MsgDisp("主人公","Hey, 
haven't you laughed enough?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("B330A20801_06_000");
MsgDisp("Himuro","...You look like you're
having a lot of fun.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ChMouthOpenLevel(1,0);
VoicePlay("B330A20801_01_000");
MsgDisp("Kazama","…………");
MsgDisp("主人公","Umm... what's up 
with you two?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B330A20801_01_010");
MsgDisp("Kazama","Because we're two guys
who had to ride together.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("B330A20801_02_020");
MsgDisp("Sassa","That was the result 
of a fair rock-paper-scissors 
match though?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20801_06_010");
MsgDisp("Himuro","Well, sure.
Then next, let's go to
the ferris wheel.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("B330A20801_01_020");
MsgDisp("Kazama","Wait.
Aren't we going to do 
rock-paper-scissors next also?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A20801_02_030");
MsgDisp("Sassa","You're free to withdraw.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20801_01_030");
MsgDisp("Kazama","There's no way I'll withdraw.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A20801_06_020");
MsgDisp("Himuro","Ryota-senpai, I feel like
you've already lost.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B330A20801_01_040");
MsgDisp("Kazama","Shut up.");
MsgDisp("主人公","Umm... we can ride as four
people on the ferris wheel?");
ChEyeOpenLevel(2,#1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChMouthOpenLevel(1,0);
VoicePlay("B330A20801_01_050");
MsgDisp("Kazama","…………");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20801_06_030");
MsgDisp("Himuro","…………");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A20801_02_040");
MsgDisp("Sassa","I'm okay either way you know?");
ChEyeOpenLevel(1,8);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20801_06_040");
MsgDisp("Himuro","You're awfully calm, 
Nozomu-senpai.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A20801_01_060");
MsgDisp("Kazama","...Let's do that.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B330A20801_02_050");
MsgDisp("Sassa","Heheh,
let's ride as a four then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2,0,30);
ChClose(1,0,30);
ChClose(6,0,30);
ChLayout(1);
ChOpen(1,255,7,2,2,0,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20801_01_070");
MsgDisp("Kazama","Inori, there's great damage in guys 
riding altogether on a ferris wheel.
But surely this will change the tide.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A20801_06_050");
MsgDisp("Himuro","Right.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(1,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(???
Everyone is having fun... right?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(2);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
