switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800005_08_000");
    MsgDisp("Shirahane","Handmade chocolate!
......Hm?");
    MsgDisp("主人公","What is it?");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("L040800005_08_010");
    MsgDisp("Shirahane","This...... might be somethin' I'm not good
with. But, I'll be fine.");
    MsgDisp("主人公","(Could it be that I put in something he
doesn't like......)");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800005_08_020");
    MsgDisp("Shirahane","This is handmade- Ah.");
    MsgDisp("主人公","What is it?");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("L040800005_08_030");
    MsgDisp("Shirahane","Just a little somethin' that I don't
really like.");
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800005_08_040");
    MsgDisp("Shirahane","But it's all good! If I pinch my nose, I
can eat it. Thanks!");
    MsgDisp("主人公","(Something he doesn't like......
I should've checked more thoroughly.)");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChCheek(8,8);
    VoicePlay("L040800005_08_050");
    MsgDisp("Shirahane","Yay, handmade chocolate!
I'm super stoked▼");
    MsgDisp("主人公","Thank goodness!");
    ChEye(8,0);
    ChMouth(8,4);
    ChEyeOpenLevel(8,10);
    ChMouthOpenLevel(8,0);
    ChCheek(8,6);
    VoicePlay("L040800005_08_060");
    MsgDisp("Shirahane","............");
    MsgDisp("主人公","Um, what's wrong?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("L040800005_08_070");
    MsgDisp("Shirahane","Imma be honest, okay?
There's somethin' on this I don't like.");
    ChEye(8,1);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChCheek(8,8);
    VoicePlay("L040800005_08_080");
    MsgDisp("Shirahane","But I'll do my best and eat it!
I'll take this chance to get over it!");
    MsgDisp("主人公","Oh, but......");
    ChEye(8,1);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("L040800005_08_090");
    MsgDisp("Shirahane","It's fine.
I can't be a kid forever!
Can't be picky.");
    MsgDisp("主人公","(Something he doesn't like......
I should've checked more thoroughly.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
