switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,4);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800006_08_000");
    MsgDisp("Shirahane","This is...... handmade, right?");
    MsgDisp("主人公","Yeah.
I tried my best, but I couldn't do it very
well......");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("L040800006_08_010");
    MsgDisp("Shirahane","Yeah, I bet you did your best.
But......
I gotta be brave.");
    MsgDisp("主人公","(Ugh......
I wish I had tried a little harder......)");
    break ;
    case 3:
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("L040800006_08_020");
    MsgDisp("Shirahane","This chocolate is handmade, ain't it.");
    MsgDisp("主人公","Yeah, I did my best, but......");
    ChEye(8,2);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800006_08_030");
    MsgDisp("Shirahane","The originality is crazy.
Like nothin' I've ever seen before.");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("L040800006_08_040");
    MsgDisp("Shirahane","......Sorry if I can't eat it all, 'kay?");
    MsgDisp("主人公","(Ugh......
I wish I had tried a little harder......)");
    break ;
    case 4:
    case 5:
    ChEye(8,0);
    ChMouth(8,4);
    ChEyeOpenLevel(8,10);
    ChCheek(8,8);
    VoicePlay("L040800006_08_050");
    MsgDisp("Shirahane","Handmade...... chocolate, right?");
    MsgDisp("主人公","Yeah.
But, it didn't go very well......
Sorry.");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("L040800006_08_060");
    MsgDisp("Shirahane","Hm.
But, you did your best, eh?");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800006_08_070");
    VoiceEVSPlay(8);
    MsgDisp("Shirahane","Just that feelin' makes me happy.
Thanks, ｛主人公｝.");
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("L040800006_08_080");
    MsgDisp("Shirahane","See, the toppings must be nice on their
own. If I eat 'em little by little, it
might be alright.");
    MsgDisp("主人公","(｛大地＊＊｝ is so nice......
But, I wish I had tried harder......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
