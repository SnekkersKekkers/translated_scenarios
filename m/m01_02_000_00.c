SEPlay("EV_SE_669");
SEWait();
MsgDisp("主人公","(Must be Mom......)");
SEPlay("EV_SE_049");
SEPlay("EV_SE_006",0,0.4);
SEWait();
VoicePlay("M010200000_02_000");
MsgDisp("Sassa?","She's sleeping...... S-Sorry.
Ah, no, it's fine.");
MsgDisp("主人公","Ehh∋　this voice is......");
SEPlay("EV_SE_DOOR_024");
SEWait();
VoicePlay("M010200000_02_010");
MsgDisp("Sassa?","It's me.
You up?");
MsgDisp("主人公","Hehe, I knew it.
｛颯砂＊＊｝, I'm awake.
Come in.");
SEPlay("EV_SE_DOOR_007");
Wait(18);
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,255,4,0,2,-1,-1,0,0);
VoicePlay("M010200000_02_020");
MsgDisp("Sassa","Excuse me......
And? How you holding up?");
MsgDisp("主人公","｛颯砂＊＊｝, are YOU okay?
Did you run into something?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("M010200000_02_030");
MsgDisp("Sassa","I hit my head.
Come to think of it, sorry.
That what woke you up?");
MsgDisp("主人公","Uh-uh,I was awake a little before.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("M010200000_02_040");
MsgDisp("Sassa","That right.
Mm, your color looks pretty good.");
MsgDisp("主人公","Mm,I'm okay now.
But ｛颯砂＊＊｝, what about practice?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("M010200000_02_050");
MsgDisp("Sassa","I gave up and cut it short.
Either way, I was wondering about you so 
my body wasn't feeling it.");
MsgDisp("主人公","Di, did you? I'm sorry. I'm resting a lot,
I think I can go to school soon.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("M010200000_02_060");
MsgDisp("Sassa","Aa, please do.
Right now, I can't focus on practice.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("M010200000_02_070");
MsgDisp("Sassa","Ah, but no rushing it.
It's important to heal.");
MsgDisp("主人公","Yeeees.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("M010200000_02_080");
MsgDisp("Sassa","It's good to be obedient.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("M010200000_02_090");
MsgDisp("Sassa","Ah, I'll go now. A big guy taking up
space's just in the way.");
MsgDisp("主人公","Oh, that's not true at all.
But, thanks.
Watch your head, okay?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("M010200000_02_100");
MsgDisp("Sassa","Shut up!! Hn, Glad I could see your
healthier looking face. Later.");
MsgClose();
SEPlay("EV_SE_690",0.1,0.5);
BGMStop();
MsgClose();
ChClose(2);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(｛颯砂＊＊｝ made me feel better. Alright,
time to sleep more and heal up quick!)");
