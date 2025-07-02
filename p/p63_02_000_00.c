BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc722",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're serving homemade herb tea
and cookies. It would be nice if it was
well received though...)");
    MsgClose();
    ChOpen(2,254,2,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P630200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
It's somewhat of weird smell, huh?");
    MsgDisp("主人公","Ah,｛颯砂＊＊｝.
You came."); 
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200000_02_010");
    MsgDisp("Sassa","Yeah, is this herbal tea?");
    MsgDisp("主人公","That's right.
We grew it.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200000_02_020");
    MsgDisp("Sassa","Heehー, is it tasty?");
    MsgDisp("主人公","We can prepare a blend that's easy to
drink for your first time trying it♪");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P630200000_02_030");
    MsgDisp("Sassa","Heehー,that's pretty good.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200000_02_040");
    MsgDisp("Sassa","Then, I'll have your recommended 
blend and cookies please.");
    MsgDisp("主人公","Then, this way please.
One herb tea set please!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,-1);
    ChMouth(2,-1);
    ChCheek(2,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc722",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're serving homemade herb tea
and cookies. It would be nice if it was
well received though...)");
    MsgClose();
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P630200000_02_050");
    MsgDisp("Sassa","｛主人公｝,
I came to visit.");
    MsgDisp("主人公","Nice to see you, welcome～!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P630200000_02_060");
    MsgDisp("Sassa","Heeh, that's a nice apron.");
    MsgDisp("主人公","Is it?
everyone is matching.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P630200000_02_070");
    MsgDisp("Sassa","Yeah.
There's a famillial feel, it's calming.");
    MsgDisp("主人公","The herbal tea's blend also
has a relaxing effect.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P630200000_02_080");
    MsgDisp("Sassa","I see, a synergistic effect.
Then, please give me your recommended set.");
    MsgDisp("主人公","Then, this way please.
One herb tea set, please.");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(2,-1);
    ChMouth(2,-1);
    ChCheek(2,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
