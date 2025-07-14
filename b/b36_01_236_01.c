MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
ScrFadeIn(0);
ChEye(1,4);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B360123601_01_000");
MsgDisp("Kazama","The finale of today.");
MsgDisp("主人公","Yeah, we can finally see the night parade.
I'm so happy!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360123601_01_010");
MsgDisp("Kazama","You really like this huh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("B360123601_01_020");
MsgDisp("Kazama","I have to say,
I'm a little frustrated.");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360123601_01_030");
MsgDisp("Kazama","If you're this happy now, it makes me
think about what sort of expression you
must have had when you first came here.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("B360123601_01_040");
MsgDisp("Kazama","I wanted to be 
with you then too.");
MsgDisp("主人公","Hehe, it must've been around when we were
in elementary school.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B360123601_01_050");
MsgDisp("Kazama","I see.
At that time, we were separated by 9000
kilometers.");
MsgClose();
ChClose(1,0,30);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,4,3,#1,#1,0,0,0,30);
Wait(60,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360123601_01_060");
MsgDisp("Kazama","But, I'm by your side now.");
MsgDisp("主人公","｛風真＊＊｝?");
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("B360123601_01_070");
MsgDisp("Kazama","I can't return back to when we were in
elementary school, but your reactions now
can't be inferior either.");
MsgDisp("主人公","Are you saying I'm like a kid?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360123601_01_080");
MsgDisp("Kazama","You're always doing new things.
I'm praising you.");
MsgDisp("主人公","Hmm. Even ｛風真＊＊｝ looks like he's
having fun.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360123601_01_090");
MsgDisp("Kazama","Yeah. I'm enjoying it.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B360123601_01_100");
MsgDisp("Kazama","Oh, it's empty over there.
Shall we head there?");
MsgDisp("主人公","Yeah!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(I wonder what it would feel like to have
been able to come with ｛風真＊＊｝ here
in elementary school...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChOpen(1,255,7,0,0,#1,#1,0,0,0,0);
