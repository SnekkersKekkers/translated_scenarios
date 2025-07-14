BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,2,2,2,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H4A2200001_22_000");
    MsgDisp("Hikaru","Aah～,
we were so close to winning～......");
    MsgDisp("主人公","Haa...... it's frustrating.");
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H4A2200001_22_010");
    MsgDisp("Hikaru","Yeah. Hikaru and everyone in the team was
perfect, but the winning school was even
more amazing.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H4A2200001_22_020");
    MsgDisp("Hikaru","But you know, Hikaru had a lot of fun just
doing rhythmic gymnastics with Mari and
the others. Really!");
    MsgDisp("主人公","(We didn't win, but I'm glad I stayed in
the rhythmic gymnastics club......)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,2,2,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H4A2200001_22_030");
    MsgDisp("Hikaru","Uu......
Mari, I'm sorry.");
    MsgDisp("主人公","Hm, ｛ひかる＊｝, what's wrong?");
    ChMotion(22,2,1);
    VoicePlay("H4A2200001_22_040");
    MsgDisp("Hikaru","Hikaru should've tried harder.
It's definitely Hikaru's fault that we
lost......");
    MsgDisp("主人公","Not at all.
The opponent was just too strong.");
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H4A2200001_22_050");
    MsgDisp("Hikaru","Yeah...... But I wanted to win with Mari
and everyone else......");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H4A2200001_22_060");
    MsgDisp("Hikaru","......Haa, let's cheer up.
Everyone did their best after all.
Good work, Mari!");
    MsgDisp("主人公","(｛ひかる＊｝...... we didn't win, but
I'm glad I stayed in the rhythmic
gymnastics club......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
