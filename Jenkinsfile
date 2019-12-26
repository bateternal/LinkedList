pipeline {
  agent any
  stages {
    stage('Configure') {
      steps {
        dir('build') {
          sh 'cmake ../'
        }
      }
    }
    stage('Build') {
      steps {
        dir('build') {
          sh 'cmake --build .'
        }
      }
    }  
    stage('Test') {
      steps {
        dir('build') {
          sh 'ctest -T test --no-compress-output'
        }
      }
    }
  }
}
