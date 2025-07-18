BGOpen("sc200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, nice weather! Come to think of it,
I've been in good shape lately. Maybe it's
because of all the exercise?)");
VoiceEVSPlay(2);
VoicePlay("G110200400_02_000");
MsgDisp("Sassa?","｛主人公｝.
You're here, huh?");
MsgClose();
SEPlay("EV_SE_625");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Were you running today too?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G110200400_02_010");
MsgDisp("Sassa","Yeah, but don't make it sound like I'm a
horse or something.");
MsgDisp("主人公","Hehe, horse?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G110200400_02_020");
MsgDisp("Sassa","Ah, you're laughing?
As a punishment, let's sprint together.");
MsgDisp("主人公","Ehh-∋");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,1,1,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200400_02_030");
MsgDisp("Sassa","You've gotten a lot better.
You can keep up with me just fine, huh?");
MsgDisp("主人公","R-Really?");
MsgDisp("主人公","(Hehe...
｛颯砂＊＊｝'s hair is so cute, the
way it flutters...like a horse's mane?)");
BGMVol(0.5,2);
while (1){
    RunEverydaySksp(2,1,0,0,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110200400_02_050");
    ChEye(2,0);
    ChMouth(2,1);
    ChMotion(2,0);
    MsgDisp("Sassa","Keep your chest out.
Look slightly ahead.");
    }
VoicePlay("G110200400_02_040");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","Eh, my hair?
Yeah, it's naturally curly.
I'm surprised you guessed that!");
VoicePlay("G110200400_02_060");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","This is easy.
Shall we try running a little harder?");
MsgDisp("主人公","Ehhh∋
That's a little difficult...");
VoicePlay("G110200400_02_070");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","I see, but it's incredible.");
VoicePlay("G110200400_02_080");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("Sassa","I want to run with you for real one day.
Okay?");
MsgClose();
SEStop("EV_SE_FOOT_037",1.5);
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("sc200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew...I think I was able to run a bit
better than last time. Maybe it's because
I've been working hard exercising?)");
MsgClose();
ScrFadeOut(0,0);
