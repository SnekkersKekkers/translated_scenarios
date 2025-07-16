MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("T020500000_05_000");
MsgDisp("Hiiragi?","｛主人公｝.");
MsgClear();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C05_HIIRAGI_KOKU",0.01);
ChOpen(5,254,7,0,4,#1,#1,0,0);
MsgDisp("主人公","｛柊＊＊＊｝......
Why are you here?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("T020500000_05_010");
MsgDisp("Hiiragi","I stubbornly believed that if I came here,
I would meet you.
...... It's a bad habit.");
ChEyeOpenLevel(5,10);
MsgDisp("主人公","Eh?");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("T020500000_05_020");
MsgDisp("Hiiragi","......Do you remember when I ate half of
your bento on the rooftop?");
MsgDisp("主人公","Yeah. ｛柊＊＊＊｝ You were
trying to do your student council work
without even eating lunch.");
Wait(60,0);
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
VoicePlay("T020500000_05_030");
MsgDisp("Hiiragi","By that time, I think you already caught
onto the fact it had fallen apart.");
MsgDisp("主人公","Eh......?");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,0);
VoicePlay("T020500000_05_040");
MsgDisp("Hiiragi","In order to increase the theatre company's
reason of existence, I would force the
members to go through rigorous training.");
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("T020500000_05_050");
MsgDisp("Hiiragi","But simultaneously, my own academic
ability was barely even adequate. As a
Haba Student I also didn't possess a
reason of being.");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,0);
VoicePlay("T020500000_05_060");
MsgDisp("Hiiragi","To compensate for that disparity, even if
it was just a little, I would actively
participate in the student council......");
MsgDisp("主人公","Is that so......
I'm sorry I never noticed.");
ChMotion(5,2);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,2);
ChMouth(5,0);
ChEyeOpenLevel(5,8);
VoicePlay("T020500000_05_070");
MsgDisp("Hiiragi","By taking on everything myself, I was
unconsciously blaming you and those around
me.");
ChEye(5,4);
ChMouth(5,0);
ChEyeOpenLevel(5,8);
VoicePlay("T020500000_05_080");
MsgDisp("Hiiragi","So much so that I began to drive the
members of the Habataki Theatre Company
into despair.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020500000_05_090");
MsgDisp("Hiiragi","But, you didn't give up on me, and little
by little you pulled me back as I headed
in the wrong direction.");
ChEyeOpenLevel(5,0);
VoicePlay("T020500000_05_100");
MsgDisp("Hiiragi","Gently.
Like the gentle change of flowing water.");
Wait(60,0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020500000_05_110");
MsgDisp("Hiiragi","......Since I was born, I have never once
liked theater.");
MsgDisp("主人公","Eh?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("T020500000_05_120");
MsgDisp("Hiiragi","Of course, the audience loved theater.
And so did the members of the company.
I was the only one who was different......");
Wait(60,0);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,0);
ChMouth(5,3);
VoicePlay("T020500000_05_130");
MsgDisp("Hiiragi","The first time I enjoyed a play was when I
performed 'Habataki Castle: Flame Rising'
with you at the school festival.");
ChEye(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEyeOpenLevel(5,#1);
ChCheek(5,5);
VoicePlay("T020500000_05_140");
MsgDisp("Hiiragi","It was from that day that I was able to
proudly say that I love theater.");
MsgDisp("主人公","Yes......");
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
VoicePlay("T020500000_05_150");
MsgDisp("Hiiragi","And there's one more thing...... that I've
come to like.");
Wait(60,0);
ChMotion(5,0);
Wait(16,0);
ChEye(5,0);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020500000_05_160");
MsgDisp("Hiiragi","You.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","！");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("T020500000_05_170");
MsgDisp("Hiiragi","Right now, you are the compass that
defines my actions. Wherever your smile
is, is the direction in which I'm moving
towards.");
ChMotion(5,0,1);
Wait(16,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020500000_05_180");
MsgDisp("Hiiragi","You are the light that guides me...... a
warm, lovely light.");
MsgClear();
ChClose(5);
ChCustomLayout(5,5,0,-2.6);
Wait(30);
SEPlay("EV_SE_544");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,7);
ChOpen(5,254,0,0,0,#1,#1,0,0);
VoicePlay("T020500000_05_190");
MsgDisp("Hiiragi","I love you.
I want the two of us to walk together
forever.");
