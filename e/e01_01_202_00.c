BGOpen("fp000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.
Huh, is that...");
VoicePlay("E010120200_02_000");
MsgDisp("Sassa?","Hey, you're wasting some good legs!
Exercise a little.");
VoicePlay("E010120200_01_000");
MsgDisp("Kazama?","Do you have to bother me with this all the
time?
Leave me alone.");
MsgDisp("主人公","｛風真＊＊｝, ｛颯砂＊＊｝!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,35,0,0,2,#1,#1,0,1,0,30);
ChOpen(2,255,3,0,4,#1,#1,0,2,0,30);
ChEye(1,3);
ChMotion(1,3);
VoicePlay("E010120200_01_010");
MsgDisp("Kazama","What are you doing here?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("E010120200_02_010");
MsgDisp("Sassa","Amazing, the three childhood friends all
together!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
MsgDisp("主人公","Hehe.
What were you guys doing?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("E010120200_01_020");
MsgDisp("Kazama","None of your business──");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010120200_02_020");
MsgDisp("Sassa","Ryota was racing with the bus.
He's still got a good spring, so I was
recommending the sports club to him.");
ChEye(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Racing with the bus?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("E010120200_01_030");
MsgDisp("Kazama","Sassa, why did you have to make it more
interesting than it is?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("E010120200_01_040");
MsgDisp("Kazama","I was running after a client who forgot
something. Since they got on the bus, I
had no choice but to run after the bus,
right?");
MsgDisp("主人公","Amazing!
Did you manage to catch up to them?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010120200_02_030");
MsgDisp("Sassa","Yeah, it was brilliant.
Ryota has always had an exceptional sports
sense, but he didn't join any team!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010120200_01_050");
MsgDisp("Kazama","Sassa, you don't get it do you?
It doesn't matter how much \"sense\" I got,
as long as you're around, I feel mediocre.");
MsgDisp("主人公","Is that so?
But you can do anything, ｛風真＊＊｝, I
don't think you're mediocre at all!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,7);
VoicePlay("E010120200_01_060");
MsgDisp("Kazama","Uuh...
Ah...");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("E010120200_02_040");
MsgDisp("Sassa","Bwahaha!
Ryota, speechless and blushing, like a shy
little girl!");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010120200_01_070");
MsgDisp("Kazama","Shut up.
I'm not joining any sports club anyway.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,#1);
ChCheek(1,0);
VoicePlay("E010120200_01_080");
MsgDisp("Kazama","If you're so eager to recruit someone, why
don't you recruit this one?
She's always sloppily running around.");
MsgDisp("主人公","...Eh?
This one, you mean me?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("E010120200_01_090");
MsgDisp("Kazama","That's what I said!
Alright, gotta go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
ChPosition(2,0);
Wait(60,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010120200_02_050");
MsgDisp("Sassa","That's too bad.
He's always like that, blaming me.
You tell him, okay?");
MsgDisp("主人公","To be recognized by you, ｛颯砂＊＊｝,
｛風真＊＊｝ must really have awesome
sports abilities!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010120200_02_060");
MsgDisp("Sassa","For sure!
But the truth is I have always liked
simply running together with Ryota.");
MsgDisp("主人公","You guys seem close.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("E010120200_02_070");
MsgDisp("Sassa","Hehe, he's just at the right speed.");
MsgDisp("主人公","∋");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("E010120200_02_080");
MsgDisp("Sassa","Ah, I gotta go too!
I still have training!
See ya!");
MsgDisp("主人公","Y-Yeah!
See you!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(The expression on ｛颯砂＊＊｝'s face just
now, it surprised me a little...Maybe I
understand ｛風真＊＊｝'s feelings a bit!')");
MsgClose();
ScrFadeOut(0,0);
