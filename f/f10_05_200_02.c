BGOpen("sc510",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100520002_05_000");
MsgDisp("Hiiragi","Yes, that would be great.");
VoicePlay("F100520002_01_000");
MsgDisp("Kazama","No, that's interesting though.");
MsgDisp("主人公","(Ah, it's ｛柊＊＊＊｝ and
｛風真＊＊｝)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,4,0,4,#1,#1,0,1);
ChOpen(1,254,0,0,2,#1,#1,0,2);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("F100520002_05_010");
MsgDisp("Hiiragi","｛主人公｝, good timing.");
MsgDisp("主人公","What's up?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("F100520002_01_010");
MsgDisp("Kazama","Looks like Hiiragi is interested in the
archives in the storehouse.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520002_05_020");
MsgDisp("Hiiragi","Yes, it was deeply interesting, your
Grandfather's story included.");
MsgDisp("主人公","When you say archives, you mean the
letters from people long ago...
Ah, stuff like love letters?");
ChEye(1,2);
ChEyeOpenLevel(1,0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100520002_05_030");
MsgDisp("Hiiragi","Hehe, that certainly does seem rather easy
to adapt into a play.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100520002_01_020");
MsgDisp("Kazama","It's not like that. It's a \"Yuzurijou\", a
certificate of an property transfer from
ancient times. Tell me, is it interesting?");
MsgDisp("主人公","Ummm...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520002_05_040");
MsgDisp("Hiiragi","That's true, but they were carefully
distributed amongst siblings, I'm sure
there's a story behind them.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100520002_01_030");
MsgDisp("Kazama","I see.
As expected of the chairman.
It's interesting to dig deeper");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520002_05_050");
MsgDisp("Hiiragi","I'm happy to hear Kazama-kun say that.
I shall think about it carefully.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChPosition(1,0);
Wait(60,0);
MsgDisp("主人公","I hope he can create a new show.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100520002_01_040");
MsgDisp("Kazama","I wonder?
It's not that easy.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100520002_01_050");
MsgDisp("Kazama","But if it becomes a catalyst for
something, both me and Ojii-chan will be
so happy.");
MsgDisp("主人公","(Yeah, I'm looking forward to seeing what
kind of show he can create...!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
