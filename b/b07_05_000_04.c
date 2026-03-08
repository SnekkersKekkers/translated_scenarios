MsgDisp("主人公","｛Hiiragi＊＊＊｝, do you listen to music?
Is there a type you like?");
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B070500000_05_150");
MsgDisp("Hiiragi","Yes, I like music. But I'm not fussy about
genre. It's a matter of whether I like the
melody.");
MsgDisp("主人公","I see, what kind of songs do you like?");
VoicePlay("B070500000_05_160");
MsgDisp("Hiiragi","Pop, Enka, Rock, anything.
Ah, rap is a bit difficult for me to
understand.");
ChMotion(5,2);
VoicePlay("B070500000_05_170");
MsgDisp("Hiiragi","A member of the troupe recommended it to
me, so I tried to give it a listen.");
MsgDisp("主人公","Hehe, it would definitely be surprising if
｛Hiiragi＊＊＊｝ liked rap music.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B070500000_05_180");
MsgDisp("Hiiragi","Ah, just now you were laughing at how much
of a mismatch me and rap are.");
MsgDisp("主人公","Umm, I'm sorry.");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("B070500000_05_190");
MsgDisp("Hiiragi","It's alright.
But, you know, something might come out of
the mismatch?");
MsgDisp("主人公","(｛Hiiragi＊＊＊｝ is interested in rap...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
