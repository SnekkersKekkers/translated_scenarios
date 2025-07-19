BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, time to head home...)");
VoiceEVSPlay(2);
VoicePlay("E010220000_02_000");
MsgDisp("Sassa?","｛主人公｝.");
MsgDisp("主人公","Hmm?");
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,255,3,0,4,#1,#1,0,1,0,30);
ChOpen(1,255,0,2,1,0,#1,0,2,0,30);
VoicePlay("E010220000_02_010");
MsgDisp("Sassa","Just like Ryota said, you're here!");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("E010220000_01_000");
MsgDisp("Kazama","Hahh...
Hahhh...");
ChMouth(1,2);
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","｛颯砂＊＊｝, ｛風真＊＊｝!
What are you guys doing?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010220000_02_020");
MsgDisp("Sassa","We were eating a hamburger, and then Ryota
said you were in the shop right next to
us!");
MsgDisp("主人公","The burger shop...
Ah, this one right here?
But that was a long time ago.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("E010220000_01_010");
MsgDisp("Kazama","Around mid-afternoon.");
MsgDisp("主人公","Yeah, maybe.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("E010220000_02_030");
MsgDisp("Sassa","You should have told me right away!
We could have spent the day together.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010220000_01_020");
MsgDisp("Kazama","Hey, you know, even she probably wants
some time to herself to shop for
accessories and clothes, right?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("E010220000_02_040");
MsgDisp("Sassa","Huh...
Ah, that's what you mean.");
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("E010220000_02_050");
MsgDisp("Sassa","But I mean, Ryota.
You should have told me earlier.
Then we wouldn't have come this far.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010220000_01_030");
MsgDisp("Kazama","Who's the one who started running before
saying anything?");
MsgDisp("主人公","Hehe, so that's how it went?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010220000_01_040");
MsgDisp("Kazama","Huh...
So, got anything good?");
MsgDisp("主人公","Yeah, I looked at a lot of stuff.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010220000_02_060");
MsgDisp("Sassa","Alright, then we can hang out together if
you're done.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("E010220000_01_050");
MsgDisp("Kazama","Looks like it.
Let's go home together.");
MsgDisp("主人公","Yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0);
