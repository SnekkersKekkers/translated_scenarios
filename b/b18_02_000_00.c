ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChCheek(2,10);
VoiceEVSPlay(2);
VoicePlay("B180200000_02_000");
MsgDisp("Sassa","｛主人公｝.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B180200000_02_010");
MsgDisp("Sassa","Umm, well...
I was thinking of addressing 
you like this...");
MsgSel("Well, it's fine","Yeah～, it's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChCheek(2,0);
    VoicePlay("B180200000_02_020");
    MsgDisp("Sassa","I'm glad.
If you didn't like it, I 
don't know what I would do.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B180200000_02_030");
    VoiceEVSPlay(2);
    MsgDisp("Sassa","Ahem...
｛主人公｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChCheek(2,10);
    VoicePlay("B180200000_02_040");
    MsgDisp("Sassa","Crap, this is awkward.
Then, shall I say it ten 
more times.");
    MsgDisp("主人公","Ehh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B180200000_02_050");
    MsgDisp("Sassa","I'm joking. 
But, I might call your name more than
necessary until we get used to it.");
    MsgDisp("主人公","(I'm somewhat flustered...)");
    break ;
    case 1:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChCheek(2,0);
    VoicePlay("B180200000_02_060");
    MsgDisp("Sassa","Ahhー.
I-Is that right?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("B180200000_02_070");
    MsgDisp("Sassa","It doesn't really feel
right all of a suddenー.
Haha...");
    MsgDisp("主人公","(Did I make him feel bad...?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
