BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, let's head home for today.)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,255,0,0,0,#1,#1,0,0);
VoicePlay("E010240000_21_000");
MsgDisp("Michiru","Mari, what a coincidence.");
MsgDisp("主人公","Ah, ｛みちる＊｝.
Going out alone?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("E010240000_21_010");
MsgDisp("Michiru","Not really, I work at the confectionery
around here.
Are you doing some shopping?");
MsgDisp("主人公","Yeah, I'm just about to go home.
Good luck at work!");
ChPosition(21,1);
MsgClose();
Wait(10,0);
ChOpen(2,255,0,0,4,#1,#1,0,2);
VoiceEVSPlay(2);
VoicePlay("E010240000_02_000");
MsgDisp("Sassa","｛主人公｝.
Oh, and Michiru-san too.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("E010240000_21_020");
MsgDisp("Michiru","Hehe, a rare trio, isn't it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010240000_02_010");
MsgDisp("Sassa","Yeah maybe.
What were you doing?");
MsgDisp("主人公","｛みちる＊｝ is going to
work.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010240000_02_020");
MsgDisp("Sassa","Oh yeah, at the Japanese confectionery?
Just in time!
Mind if I go too?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("E010240000_21_030");
MsgDisp("Michiru","Huh...
Why?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("E010240000_02_030");
MsgDisp("Sassa","Why?...
I've been given a mission to go buy
sweets.");
MsgDisp("主人公","You're an errand boy?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010240000_02_040");
MsgDisp("Sassa","Yeah, apparently one of my father's
clients is coming over, but I think my mom
just wants to eat them herself.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("E010240000_02_050");
MsgDisp("Sassa","...But that's enough about it.
Michiru-san, let's go? And maybe you can
choose some good ones for me.");
ChEye(2,0);
ChEyeOpenLevel(2,10);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("E010240000_21_040");
MsgDisp("Michiru","You can leave it to me.
But, Mari is coming too.
Right?");
MsgDisp("主人公","Huh?
I was just about to...");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("E010240000_02_060");
MsgDisp("Sassa","That's fine, let's get going, shall we?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
ChPosition(21,0);
Wait(60,0);
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("E010240000_21_050");
MsgDisp("Michiru","I'm so sorry to have involved you.
It's just that, alone with a boy, I'm...");
MsgDisp("主人公","(Is ｛みちる＊｝
embarrassed to be alone with a boy?
Maybe she's not used to it.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
