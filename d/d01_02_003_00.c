BGOpen("wf210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew......
I hope I was able to get some
interesting information......)");
SEPlay("EV_SE_769",0,0.6);
Wait(100,1);
SEPlay("EV_SE_770",0,0.5);
SEStop("EV_SE_769",0.2);
VoicePlay("D010200300_02_000");
MsgDisp("Sassa?","Hey, don't go that way～!");
MsgDisp("主人公","(Ah, that voice is......
It's coming from the beach!)");
SEStop("EV_SE_770",1);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C02_SASSA_B",0.01);
StlOpen("ev_02_13");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
VoicePlay("D010200300_02_010");
MsgDisp("Sassa","Aha. You're soaking wet.
Look, your shivering so much.");
MsgDisp("主人公","｛颯砂＊＊｝！");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200300_02_020");
MsgDisp("Sassa","Oh!　It's you. What's up?");
MsgDisp("主人公","I came this way because I thought
I heard ｛颯砂＊＊｝'s voice.
......Those dogs are huge.");
StlEye(2,1);
StlMouth(2,0);
StlEyeOpenLevel(2,0);
VoicePlay("D010200300_02_030");
MsgDisp("Sassa","Aren't they cool?
In addition to my training, I also have
a part-time job walking dogs.");
MsgDisp("主人公","They seem to cherish ｛颯砂＊＊｝ a lot.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200300_02_040");
MsgDisp("Sassa","Yeah, but they don't listen to me
at all. If they run all along the beach,
of course they're going to get wet.");
MsgDisp("主人公","I'm sure the dogs have a lot of fun
running with ｛颯砂＊＊｝.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200300_02_050");
MsgDisp("Sassa","Yeah, it's fun for me too. Running in
the sand is good exercise and I get paid
for part-time work.");
MsgDisp("主人公","Hehe, everyone ends up happy!");
SEPlay("EV_SE_769",0,0.9);
MsgDisp("","(Woof! Woof!)");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("D010200300_02_060");
MsgDisp("Sassa","Hahaha.
Are you guys agreeing?");
MsgDisp("主人公","Hehe!");
SEStop("EV_SE_769",1);
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200300_02_070");
MsgDisp("Sassa","So, what are you up to?");
MsgDisp("主人公","I'm also working part-time. I'm
trying to get something fun to report
on for Habacha.");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200300_02_080");
MsgDisp("Sassa","I see.
I wish I could help you somehow.");
MsgDisp("主人公","Really?
Well, you could tell me a bit about
yourself, ｛颯砂＊＊｝.");
StlEye(2,1);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("D010200300_02_090");
MsgDisp("Sassa","I'm fine with that, but is that
really fun to report on?");
MsgDisp("主人公","Leave it to me!
So, can you tell me a bit about track
and field?");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200300_02_100");
MsgDisp("Sassa","Ooh, that's good. If you talk about
the Octathlon on Habacha it might get
some more attention!");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30);
MsgDisp("主人公","(Alright, time to start the
interview! I'll write an awesome
article!)");
ChPrmTblAdd(2,0);
