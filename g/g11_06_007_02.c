BGOpen("sc500",1);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgClose();
ChOpen(6,254,0,0,0,-1,-1,0,0);
MsgDisp("主人公","｛氷室＊＊｝.
Are you heading home now?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600702_06_000");
MsgDisp("Himuro","Yeah, but I'm going to stop by the beach.");
MsgDisp("主人公","Ah, are you maybe going surfing?
Can I come to watch?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("G110600702_06_010");
MsgDisp("Himuro","......Do as you like.");
SEStop("EV_SE_SCHOOL_002",2);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(｛氷室＊＊｝ is really good at surfing
isn't he......)");
MsgClose();
SEPlay("EV_SE_542",0,0.4);
SEWait();
ChOpen(6,100,0,0,0,-1,-1,0,0);
VoicePlay("G110600702_06_020");
MsgDisp("Himuro","......?　What.");
MsgDisp("主人公","(Come to think of it, he used to play bass
too. Not only is he athletic but His hands
are dexterous too......?)");
while (1){
    RunEverydaySksp(6,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("G110600702_06_030");
    MsgDisp("Himuro","Wait∋　What's this all of a sudden!");
    }
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600702_06_040");
MsgDisp("Himuro","What......? Why are you staring at my arm
all of a sudden.");
MsgDisp("主人公","Ah, sorry. I'm just thinking about before,
that time we went to the livehouse.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600702_06_050");
MsgDisp("Himuro","Oh......that?");
MsgDisp("主人公","｛氷室＊＊｝, borrowed a bass from one of
the band members and started playing,
right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600702_06_060");
MsgDisp("Himuro","Yeah, that happened.");
MsgDisp("主人公","That's why I thought ｛氷室＊＊｝ is good
with his hands too.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600702_06_070");
MsgDisp("Himuro","Good with hands, 'too'......what does that
mean?");
MsgDisp("主人公","You can surf, you can play the bass, you
can study, So, it seems like there's
nothing you're bad at.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600702_06_080");
MsgDisp("Himuro","Of course not.
It's just that you only see me
doing the things I'm good at.");
MsgDisp("主人公","Is that right......?
Then, ｛氷室＊＊｝'s
weaknesses——");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600702_06_090");
MsgDisp("Himuro","I won't tell you.");
MsgDisp("主人公","Eh?
Then, a hint——");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600702_06_100");
MsgDisp("Himuro","I won't tell you.");
MsgDisp("主人公","(Ugh, now I'm curious......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
