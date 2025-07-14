MsgDisp("主人公","(Huh? What's going on with me? I'm feeling
so nervous...)");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B070300001_03_480");
MsgDisp("Honda","What's wrong?");
MsgDisp("主人公","My heart suddenly started beating fast...");
ChMotion(3,4);
VoicePlay("B070300001_03_490");
MsgDisp("Honda","Now that I look closely, your face is red.
Are you feeling unwell?");
MsgDisp("主人公","Eh?");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,5);
VoicePlay("B070300001_03_500");
MsgDisp("Honda","This is bad!
Your face is getting even redder!
Do you have a fever?");
MsgDisp("主人公","W-Wait! Um... could you not look at me so
closely?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B070300001_03_510");
MsgDisp("Honda","Is it because of me..?
Did I do something?");
ChMotion(3,2);
VoicePlay("B070300001_03_520");
MsgDisp("Honda","I was just keeping an eye on you, because
you seemed unwell.");
MsgDisp("主人公","...That might be it.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B070300001_03_530");
MsgDisp("Honda","What part?");
MsgDisp("主人公","Um... it's because we're staring at each
other...");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300001_03_540");
MsgDisp("Honda","Oh, is that it?
I was surprised——");
ChEye(3,5);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B070300001_03_550");
MsgDisp("Honda","...Huh?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
ChCheek(3,8);
VoicePlay("B070300001_03_560");
MsgDisp("Honda","I don't know what it is, but now I'm
feeling nervous too.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("B070300001_03_570");
MsgDisp("Honda","This... wait, let me take a deep breath!");
MsgDisp("主人公","(Looks like my nervousness has spread to
｛本多＊＊｝... )");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
